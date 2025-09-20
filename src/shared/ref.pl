#@HDR@	$Id$
#@HDR@		Copyright 2024 by
#@HDR@		Christopher Caldwell/Brightsands
#@HDR@		P.O. Box 401, Bailey Island, ME 04003
#@HDR@		All Rights Reserved
#@HDR@
#@HDR@	This software comprises unpublished confidential information
#@HDR@	of Brightsands and may not be used, copied or made available
#@HDR@	to anyone, except in accordance with the license under which
#@HDR@	it is furnished.
my $mvcmd = " ";
my basechar = ord($mvcmd)+1;
for( $row=0; $row<$MAXROW; $row++ )
    {
    my $movenext = 1;
    for( $col=0; $col<$MAXCOL; $col++ )
	if( lastseen[$row][$col] == now[$row][$col] )
	    { $movenext = 1; }
	else
	    {
	    if( $movenext )
	        print chr($mvcmd) . chr($row+basechar) . chr($col+basechar);
	    fg = get_fg($now[$row][$col]);
	    bg = get_bg($now[$row][$col]);
	    $chrat = get_chr($now[$row][$col]);
	    if( $chrat eq " " )
	        {
		$fg = $bg;
		$chrat = '_';
		}
	    print chr( $fg*8 + $bg + $basechar ), $chrat;
	    $movenext = 0;
	    }
    }

var colors = [ "red", "green", "blue" ];
setup_colors
    {
    foreach $c0 in colors
        foreach $c1 in colors
	    {
	    $color_to_html[ chr( *c0*8 + $c1 + $basechar ) ]
	        = "background:"+colors[c0]+";color:"+colors[c1];
	    }
    }

foreach my $clause ( split(/$mvcmd/) )
    {
    if( /(.)(.)(.*)/ )
	{
	$row = ord($1) - $basechar;
	$col = ord($2) - $basechar;
	foreach my $colchr ( /\.\./, $3 )
	    {
	    $chrsat[$row][$col++] = $colchr;
	    }
	}
    }

my $last_colcod = "";
for( $row=0; $row<$MAXROW; $row++ )
    {
    for( $col=0; $col<$MAXCOL; $col++ )
        {
	my( $colcod, $chr ) = split(//,$chrsat[$row][$col]);
	if( $colcod != $last_colcod )
	    {
	    $s .= "</span>" if( $last_colcod == "" );
	    $s .= "<span style='" . $colors[$colcod] . "'>";
	    $last_colcod = $colcod;
	    }
	$s .= $chr;
	}
    $s .= "<br>";
    }
$s .= "</span>";
