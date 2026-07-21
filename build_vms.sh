FIX_KEYWORDS="tools/fix_keywords"
F2C_CMD="/usr/local/bin/f2c -w -c -kr -NL800 -f -K"
INTERIM="interim"
BINDIR="bin"
GCC_CMD="gcc -Isrc/shared -g -DF2C"
F2C_LINK=""
COMMONS="hipak ansi_curses"
PROGS="cave cubic greebl life ocean risk scan snake star system war"
#PROGS="cave"

echodo()
    {
    echo "+ $*"
    eval "$@"
    }

echodo rm -rf $BINDIR $INTERIM
echodo mkdir -p $BINDIR $INTERIM
echodo cp src/*/*.dat src/*/*.hlp src/shared/multis.js src/shared/multis.html $BINDIR

for common in $COMMONS ; do
    echodo "$GCC_CMD -c src/shared/$common.c -o $INTERIM/$common.o"
done

# Build each binary with one invocation that compiles and links (slow)
for prog in $PROGS ; do
    echodo "$FIX_KEYWORDS < src/$prog/$prog.for | $F2C_CMD > $INTERIM/$prog.c"
    echodo "$GCC_CMD -o $BINDIR/$prog $INTERIM/hipak.o $INTERIM/ansi_curses.o $INTERIM/$prog.c $F2C_LINK"
    echo "Build status for $prog = $?."
done

# Make it easy to see how compilations went
for prog in $PROGS ; do
    ls -ld $BINDIR/$prog
done
