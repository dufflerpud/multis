#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* #define MATSIZE		28800 */
#define MATSIZE		1000

/*	Originally from:						*/
/*	    http://www.daniweb.com/software-development/c/code/216986	*/
/*	    Chandrabhanu Mahapatra 10/5/2007				*/
/*	Modified heavily for readability but otherwise unchanged.	*/
typedef enum { LCS_DIR_UP, LCS_DIR_UL, LCS_DIR_LEFT } lcs_dirs;
void lcs_piece
    (
    lcs_dirs	lcs_dir[][MATSIZE],
    const char	str0[],
    int		str0ind,
    int		str1ind,
    char **	lcs_string_pointer
    )
    {
    if( str0ind == 0 || str1ind == 0 )
	return;
    else if( lcs_dir[str0ind][str1ind] == LCS_DIR_UL )
	{
	lcs_piece( lcs_dir, str0, str0ind-1, str1ind-1, lcs_string_pointer );
	*(*lcs_string_pointer)++ = str0[str0ind-1];
	}
    else if( lcs_dir[str0ind][str1ind] == LCS_DIR_UP )
	lcs_piece( lcs_dir, str0, str0ind-1, str1ind, lcs_string_pointer );
    else
	lcs_piece( lcs_dir, str0, str0ind, str1ind-1, lcs_string_pointer );
    }

const char *lcs_analysis( const char str0[], const char str1[] )
    {
    int str0len = strlen( str0 );
    int str1len = strlen( str1 );
    int str0ind, str1ind;
    int lcs_count[MATSIZE][MATSIZE];
    lcs_dirs lcs_dir[MATSIZE][MATSIZE];
    static char lcs_string[ MATSIZE+1 ];
    char *lcs_string_pointer = lcs_string;

    for( str0ind=0; str0ind <= str0len; str0ind++ ) lcs_count[str0ind][0] = 0;
    for( str1ind=0; str1ind <= str1len; str1ind++ ) lcs_count[0][str1ind] = 0;
    for( str0ind=1; str0ind <= str0len; str0ind++ )
	for( str1ind=1; str1ind <= str1len; str1ind++ )
	    {
	    if( str0[str0ind-1] == str1[str1ind-1] )
		{
		lcs_count[str0ind][str1ind] = lcs_count[str0ind-1][str1ind-1]+1;
		lcs_dir[str0ind][str1ind] = LCS_DIR_UL;
		}
	    else if(lcs_count[str0ind-1][str1ind] >=
		    lcs_count[str0ind][str1ind-1] )
		{
		lcs_count[str0ind][str1ind] = lcs_count[str0ind-1][str1ind];
		lcs_dir[str0ind][str1ind] = LCS_DIR_UP;
		}
	    else
		{
		lcs_count[str0ind][str1ind] = lcs_count[str0ind][str1ind-1];
		lcs_dir[str0ind][str1ind] = LCS_DIR_LEFT;
		}
	    }
    lcs_piece( lcs_dir, str0, str0len, str1len, &lcs_string_pointer );
    *lcs_string_pointer++ -= 0;
    return lcs_string;
    }

main( int argc, const char *argv[] )
    {
    if( argc != 3 )
        {
	fprintf( stderr, "Usage:  %s string1 string2\n", argv[0] );
	exit( 1 );
	}

    printf( "LCS are:  %s\n", lcs_analysis( argv[1], argv[2] ) );
    printf( "    and:  %s\n", lcs_analysis( argv[2], argv[1] ) );
    exit( 0 );
    }

