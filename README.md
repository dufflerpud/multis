# multis    - Multi user games
Created by Christopher Caldwell, 1978-1982<br>
for UNH DECsystem 1099 running TOPS-10.<br>
Ported to Linux and C in 2010<br>
<hr>

<table src="src/*/*.for src/*/*.mac src/*/*.c"><tr><th align=left><a href='#dt_8702msMe3'>cave.for</a></th><td>A multi-user game to wander around in a cave made up of hexagons and monsters</td></tr>
<tr><th align=left><a href='#dt_8702msMe4'>cubic.for</a></th><td>Play against the computer, first to get 4 in a line</td></tr>
<tr><th align=left><a href='#dt_8702msMe5'>greebl.for</a></th><td>Multi-user game where the ballons are out to get you!</td></tr>
<tr><th align=left><a href='#dt_8702msMe6'>life.for</a></th><td>Yet another simulator for John Conways game of life</td></tr>
<tr><th align=left><a href='#dt_8702msMe7'>ocean.for</a></th><td>3-d multi-user game of boats, subs and choppers in a great big lake</td></tr>
<tr><th align=left><a href='#dt_8702msMe8'>risk.for</a></th><td>A computerized version of the 1957 Hasbro game of Risk</td></tr>
<tr><th align=left><a href='#dt_8702msMe9'>scan.for</a></th><td>Unfinished game in a 3-d multi-player universe</td></tr>
<tr><th align=left><a href='#dt_8702msMeA'>debug.for</a></th><td>Routines to compile multi-user games against for debugging</td></tr>
<tr><th align=left><a href='#dt_8702msMeB'>regres.for</a></th><td>A regression test for multi-user games</td></tr>
<tr><th align=left><a href='#dt_8702msMeC'>settty.for</a></th><td>Software to check if we're runnable and get terminal type from user</td></tr>
<tr><th align=left><a href='#dt_8702msMeD'>snake.for</a></th><td>A program for getting supervisory privileges at UNH Dec-10</td></tr>
<tr><th align=left><a href='#dt_8702msMeE'>star.for</a></th><td>My first multi-user game, Star Trek</td></tr>
<tr><th align=left><a href='#dt_8702msMeF'>system.for</a></th><td>Multi-user game to program ships, ports, equipment to take over a galaxy</td></tr>
<tr><th align=left><a href='#dt_8702msMeG'>war.for</a></th><td>Multi-user game depicting the trench scene from the first Star Wars movie</td></tr>
<tr><th align=left><a href='#dt_8702msMeH'>hipak.mac</a></th><td>Dec-10 assember support for multi-user games</td></tr>
<tr><th align=left><a href='#dt_8702msMeI'>hipak.c</a></th><td>C version of original Macro-10 assembler support for multi-user games</td></tr></table>

<hr>

### Mission:

	In 1978, at the age of 15 and for the next 5 years, I created 6
	programs on the University of New Hampshire's DECsystem 1090.
	These games, the "multi-user" games, were fairly bleeding edge
	at the time, taking advantage of the TOPS-10 (the OS that ran
	on the behemoth) "high segment", memory which could be shared
	between programs (analagous to the Unix/Linux concept of shared
	memory).

	The programs were written in Fortran-66, and used "hipak", routines
	written in Macro-10 for i/o, data sharing and miscellaneous
	access to the OS.  I couldn't use FOROTS (the Fortran i/o
	library) because it was designed to run in the high segment
	and since I was using the high segment for data sharing, I had
	to do my own i/o.

	These games were quite popular for the 5 years I hung around
	UNH (as a high schooler and then a student), and were
	banned on and off because they were such resource killers.

	Those games were:

		Star	- Star Trek in 2 dimensions, every man for himself
		Ocean	- A two team Quasi-3D shoot-em-up
		Cave	- A hex based version of D&D
		Greeble	- Shoot-em-up in an 80x20 grid with giant gasbags
		War	- rebels vs. Deathstar in character based 3D graphics
		System	- Corewars meets Empire

   This also includes life (the game of life) and cubic (the game of
   cubic) which are not multi-user but use the same subroutine calls
   and were written at around the same time.

	When the University finally scrapped their twin DEC-10s, the
	games were shelved as an historical footnote.

	In 2009, I brought up the SIMH version of the PDP-10
	emulator, installed TOPS-10 (702) on it as well as the
	compilers that I had at UNH and was both thrilled and
	mortified that the games compiled and ran easily.

	Being unemployed in February 2010, at the age of 47, I decided
	to try to "port" the games to a modern operating system (Linux
	and MacOS), Windows and the iPhone.

	Why?  "Because it's there".

	This is similar to a project I did a number of years ago to see how
	many different OSs I could install on my laptop and boot using GRUB
	(14, mostly limited by the 40GB disk).  The correct way to get 14
	OSs running on a machine is through the use of virtualization, *NOT*
	creating zillions of partitions, boot blocks etc.

	Anyway ...

### Known problems going in:

	The DEC-10 was the last major machine that used a memory word
	size that wasn't a multiple of an 8-bit byte.  Most modern
	computers have either 32 bit (4 byte) or 64 bit (8 byte)
	architectures.  All modern machines require an 8 bit byte (or more
	in the case of internationalized code) to store a character.

	By only supporting the digits, upper case letters and limited
	punctuation, TOPS-10 only required 6 bits to store characters.
	This character set was called "sixbit", and since the DEC-10
	had 36 bits, it could store 6 characters in a word.

	The OS took heavy advantage of this by making file names
	take one word, file extension and protections take another word,
	etc.

	Not knowing any better, I also made heavy use of sixbit.  Why?
	Because with a handful of routines for converting ASCII
	to sixbit and back, one could store most English words
	in one 36 bit word.

	In my defense, I was so enraptured with the DEC-10, I thought
	that its architecture would live on, perhaps growing to 72
	bit words, but never dying.

	Why?  From my point of view, it was the most capable machine I
	had worked with - after all, it was handling 50+ users, had
	the most compilers, the richest set of games (important!).
	I didn't understand that these things were more a factor of it being
	the machine-for-everything at the University (hey, we paid
	6 million dollars, you bet we're going to use it xxx), than
	because it was particularly capable.

The plan in 2010:
	The plan was to create a Linux/C version of "hipak", using
	System V shared memory and to not modify either the original Fortran
	source code or "hipak.mac" (my i/o library).  Instead, I figured
	I'd correct the TOPS-10 non-standard Fortran sixbit (and change
	all of the uppercase keywords and variables to lowercase) by
	running the original Fortran through a perl script to create
	something acceptable to modern Fortran compilers, in my case,
	g77 (Gnu's Fortran).

	Clearly, the task was possible because the perl script could be
	arbitrarily complex - up to including completely ignoring the initial
	source code and printing out new stuff that had nothing to do with
	its input.

	To put it more simply:

	X.FOR => DEC-10 Fortran		=> X.REL
	HIPAK.MAC => assembler		=> HIPAK.REL
	X.REL + HIPAK.REL => DEC Linker	=> X.EXE

	or

	X.FOR => My perl script => g77	=> x.o
	hipak.c => gcc			=> hipak.o
	x.o + hipak.o => gcc linker	=> x

	In fact, I could even port to machines that didn't have a Fortran
	compiler by

	X.FOR => My perl script => f2c	=> x.c
	move x.c to the new platform
	x.c => gcc			=> x.o
	hipak.c => gcc			=> hipak.o
	x.o + hipak.o => gcc linker	=> x

	Since the DEC-10 only had 1.5 Mega-words (6 megabytes) of memory,
	I figured I could simply ignore all the coding I had done to
	be conservative with memory on the DEC-10 version (the largest
	game shared less than 60k RAM) - since no modern computer has
	less than 256MB Ram, I'd have space to burn.

Discovered problems:
	The original Fortran code that I wrote was evil, even by Fortran's
	standards.

	First, I used GOTO in two evil ways:

		GOTO X			! Jumping to end of a do loop
		...			! Do we go back to beginning
		DO X ...		! Does the variable get incremented?
		    something
	    X	CONTINUE

	    And even worse:

		GOTO X			! Jumping into middle of a "do loop"
		...			! What happens when we get to end?
		DO Y ...		! Do we go back to the top of the loop?
		    ...			! Does the variable get incremented?
	    X	    something
	    	    ...
	    Y	CONTINUE

	    The error messages from a modern Fortran compiler are positively
	    insulting about such code.

	    I could either have the perl script actually recognize the line
	    numbers and fix them in the filter, or fix the original source
	    recognizing that my fix won't break anything on the old DEC-10.

	    However, by doing this, I had already violated one of my mission
	    statements:  I was modifying the original source code.

	Second, I depended on ordinary variables being initialized to zero
	    at startup time.  This is not turned on by default for "modern"
	    Fortran compilers - rather, use of uninitialized variables
	    will give a warning.

	    The GNU Fortran compiler actually allows you to produce code
	    with different behaviors (depending on command line arguments).
	    It supports several possible behaviors:
	    1:	Whatever is in memory, that's what you get.  Fun,
		but not useful unless you're really really worried about
		startup time.
	    2:	Initialized to "uninitialized".  That is, if you attempt to
	        use the variable without having first set it, you get an error.
	    3:	Initialized to zero each time you call the routine.
	    4:	Initialized to zero when the program is initial run, but
		otherwise left alone.

	    With some playing around, I determined that the code clearly
	    depended on behavior #4 (zeroed at run time), so presumably
	    this was the behavior of the DEC-10 Fortran compiler at the time.

	    The best behavior is the current default: #2, simply because
	    it forces the programmer to think about what is in the variable
	    at each subroutine calling.

	In many early implementations of Fortran, variable names were
	    restricted to 6 characters or less, were case insensitive and
	    didn't allow anything other than letters and digits (other than
	    the first character which had to be a letter).  So, to
	    meaningfully name a variable, you ended up getting pretty creative
	    with 6 letters.  It is very easy to, with the best of intentions,
	    end up with variable names as "numcrs", "nchars", "numchr" etc.
	    Not quite as bad as "n", "n1", but not that descriptive.

	    But it gets worse.

	Finally - Fortran does not insist on variable declarations.  It
	    decides by the variable name whether it is an integer or a real
	    (back then, by default, variables starting with i, j, l, m or n
	    were integers and all others were real).  This was a behavior
	    the makers were so proud of that they allowed you to configure
	    the defaults.  You could say "implicit integer ( a - z )" which
	    means that *ALL* variables (and functions) are integers unless
	    otherwise declared.

	    It is extremely easy to simply make up variable names for use
	    in a few lines of code and then forgotten.  Worse, if you have
	    assembler background on small memory machines, you'll probably
	    try to re-use memory, so generic variables "i", "i1", "ival"
	    etc. start to be way way too convenient.  The trouble is, when you
	    look at the name "ival" 30 years later it tells you nothing
	    other than that it is PROBABLY an integer and maybe that the
	    variable's use is local to the few lines of code you are looking
	    at and that if you see it used elsewhere, it probably doesn't
	    have the same use (even though it occupies the same memory!)
	    as what you first used.  Maybe.

	    Even if you do try to meaningfully name your variable, if you
	    don't declare it, you may well burn 1 of your precious 6
	    characters just making sure that Fortran treats it as an integer
	    real or logical as appropriate.  That is, with the variable name
	    "ichars", the "i" only indicates that it is an integer.

	    Forgive me Dan, for I have sinned.  I used this feature heavily.

Creeping featuritis:
	"Well, since I'm mucking around in the code, I might as well fix..."

	These games were originally run on terminals that DID NOT HAVE
	LOWER CASE.  True, if you paid extra money, most of them had lower-case
	options, but the University generally couldn't afford anything other
	than gargantuan upper-case only ADDS580 terminals.  Therefore, all
	of the code, all of the strings in the code, etc, were uppercase
	only.  When you run the old code now, by modern standards, it looks
	like the machine is constantly shouting at you.

	OK, so go back in and fix the strings to be upper/lower case.  No
	biggy.

	The University had exactly one student accessible terminal capable
	of color graphics (AND it had lowercase!), the ISC.  Not only that,
	but the screen was about twice the size and twice the width of the
	other terminals available, so people who had vision problems
	had priority use of it.

	I had written routines and actually implemented them for a couple of
	the games (Star and Ocean), but since I rarely had access to the
	terminal they weren't tested very well.

	Since the code for doing color was already in at least some of the
	programs, I figured it would be relatively easy to take advantage
	of the fact that the vast majority of modern screens are capable
	of color and that the ANSI standard implements color.

	And indeed it was for Star and Ocean - and it looked so much better
	that I figured "what the hell" and started adding color to the other
	games.

	In fact, it looked SO good that I figured I'd add color to the
	original HIPAK's definition of "ANSI" and even the DEC-10
	implementation (vs. the modern port) would look great for most
	people using it.

	Sounds good - right up until I tried to take advantage of it for
	Risk and Greebl.

	Recall that at the time this software was originally written,
	memory was precious.  Originally, it was so precious that rather
	than having two copies of the screen contents (what's currently
	displayed, what you're currently working on), the upper level
	software had a concept of what had changed on the screen and what
	had not - and so Star and Ocean kept track of what had been
	changed and what needed to be redrawn.

	However I discovered that it was actually more efficient memory
	wise to have the lower level routines keep track of this - but
	that required the two-image system.  OK, 24 rows by 80 columns
	by 7 bits per character, 5 characters per word, or 384 36 words
	required - times 2 for the currently displayed and the
	to-be-displayed.

	But, 7 bits doesn't allow you to store any character attributes:
	You need at least 6 bits more for foreground color (3 bits) and
	background color (3 bits).  To get Greebl and Risk working with
	color, I therefore ended up needing 13 bits per/screen position
	and since you'll only be able to get 2 13 bit chunks per 36 bit
	word, I decided to use 18 bits, the other 5 bits being unused
	but potentially could be used for bold, dimmed, reverse video,
	underlined and blinking).  Future expansion, right?

	Thing is, with Risk and Greebl, to save memory, since the screen
	that all players saw was identical, one of those copies of the
	screen was kept in shared memory.

	Unfortunately, to make this work, it meant I had to spend
	considerable time coding in Macro-10 (The DEC-10 assembler),
	both implementing ANSI color and storing color attributes for
	screen positions.

Solutions:
	The sixbit issue turned out to be the thorniest:  Fortran never
	implemented strings very well and anything I did generally had
	to be able to have at least 6 characters per string.

	To give you an idea of what I was starting with, the following
	was common:

			INTEGER IFROM
			DATA /IFROM/ "466257550000

	That is 46(octal) + 40(octal) = 106(octal) which is ASCII F.
	...

	To save you the time, I'll tell you that 46625755000 is sixbit for
	the word "FROM".

	You could, of course, do the computation at run time:

			INTEGER IFROM
			IFROM = ISXBIT('FROM')

	It certainly is more readable, right?  So the first thing the
	perl script did was find all really really long octal numbers
	(numbers prefaced with '"') and convert them to similar strings.
	Of course, Fortran DATA statements aren't evaluated at run time
	but rather initialize the data prior to execution.  Unfortunately,
	You can't just place DATA statements with their corresponding
	run time assignments because many subroutines had other declarations
	that happened after the DATA statements (and the compiler would
	rightfully decide these lines were out of order) - and because if they
	were done at run time, they would only be done once.

	Well, since I fixed the problems with the GOTOs jumping into loops,
	I had already modified the code - so I changed the original source
	code to use assignments - figuring that the added time required
	for execution would be minimal on a DEC-10 (should any still exist).
	I would note that my SIMH DEC-10 simulator ran faster than the
	original UNH hardware - so even if I replaced all DATA statements
	with run time initialization, it was still running faster than
	it ran natively in the good old days.

	So what does ISXBIT() do?  In hipak.mac, it returns an integer
	with the first 6 characters of the argument string stored as
	sixbit.  The easiest thing would seem to be to make sure that my
	integer was at least 36 bits (my long would be 64).  Unfortunately,
	that means I end up caring about word sizes in Fortran - and
	I felt that that was keeping things system dependent.  Instead,
	I figured I'd return an index into a string table - and as long
	as every occurence of the word would end up having the same
	index pointing into the string table, "WORD1 .EQ. WORD2" would
	do the right thing.  That is, under TOPS-10, "WORD1 .EQ. WORD2"
	would evaluate if the two integers each containing the sixbit
	words were the same words.  Under Linux, it would compare if
	the two indices were the same, but since the the indices were
	guaranteed to be unique for different words and the same for the
	same word, this was sufficient.

	Added bonus:  With this, we no longer care how long the strings
	are.

	Well, it sounded good anyways.  The first problem is that if I
	wanted to store names in shared memory, all of the different players
	had to agree that a particular index pointed to the same name.
	That is, the string pool had to be in the shared database too.
	
	Since the vast vast majority of strings weren't going to change,
	you could almost get away with simply creating a static table.
	Unfortunately, users did have the ability to set their characters
	names in most of the games.  In at least one game (Cave), after
	reading a line of input, the program immediately turned the text
	into sixbit words - and of course typos wouldn't be in that static
	table.  In the event of a non-static string table, typos would
	simply allocate new memory, never to be used again (unless someone
	typed the same typo).

	Theoretically, you could consume all of memory by simply typing
	unique typos at it.  There are lots of correct solutions here, but
	I chose the most entertaining incorrect one:  If all the players
	of a game typed as fast as they could for hours, they weren't going
	to exceed more than a megabyte of string table.  Memory is cheap.
	I use a non static string table with no garbage collection and
	a meg of memory.  Sue me.

Features added:
	In creating the C hipak shared memory library, I added better
	bounds checking than the original assembly code - and consequently
	caught a few "HIPDIM" (array bounds violations) problems that I had
	never tracked down when the games ran on the original system.
	I fixed these bugs.  The worst of these was in cave where the
	game would simply crash in the middle of a big game with lots of
	people.

	Are all the bugs gone?  Unfortunately, the only definitive way to
	really exercise the locking code is to get a lot of people playing
	them like in the 80s.  That is not likely.

	I added color and lowercase to all of the games.

	I added color to the ANSI definitions in hipak.mac because virtually
	all terminal emulators support ANSI and that would give people
	accessing the games on a DEC-10 (or more likely, a simulator) color
	support.  Yes, this means I've been hacking away in Macro-10
	assembler, something I said I wasn't going to do.

	The programs now allow you to use any non-ambiguous abbreviations
	for words instead of having a specific list of legal keywords,
	even on the DEC-10 (sixbit) versions.  In places where there is
	room on the screen, full words are printed (or the first 6
	letters on the DEC-10).  This was a natural extension of having
	the C version of the programs be able to handle long strings.

	This should be completely "backward compatible", but alas, in
	the old cave, we made up a few unfortunate abbreviations to fit
	in the 4 character hexes in the display.  For instance, you
	keep arrows in a quiver, right?  The abbreviation that appeared
	on the screen was "qivr", not "quiv".  It is now "quiv" because
	the program actually knows the full name.  In the vast majority
	of cases, we used the first 4 letters of the real word, but there
	will be a handful of cases where people's muscle memory may
	work against them.  To put it another way, "get quiv", "get quive"
	and "get quiver" now work.  "Get qivr" does not.  Fortunately,
	there are no places where the first 4 characters of a word are
	ambiguous.

	My first game, Star, was based somewhat on Michael O'Shaughnessy's
	Basic game Star.  This game allowed users to enter directions
	as 0 to 360 degrees, but 0 degrees meant to the right, 90 meant
	up, 180 meant left and 270 meant down.  Not knowing any better,
	I copied this scheme into my Star Trek game and then copied it
	again in Ocean and War.  This means that anyone who is used to the
	real life compass rose (with 0 being north, 90 being east,
	180 being south and 270 being west) gets confused.  I therefore
	added the switch "-oldang" to both the DEC-10 and Linux versions.
	This switch makes the program use the old 0"=East behavior.
	Now, it defaults to using the 0"=North compass.

Lessons learned:

	Comment your code.
	Give your variables, subroutines and functions meaningful names.
	Code written in 30 year old assembler is not necessarily dead.

Future work?
	Oh please, there was no point in doing this other than having
	a chance to spend some time reveling in my past.  However, there
	are some things I keep pondering:

	1:	I don't like the idea of my string heap growing without bounds
	2:	Right now, my shared memory is simply a gigantic struct
		which has an embedded array for the game data and another
		array for the string heap.  These are statically sized and
		are big enough to work with the biggest games.
	3:	Even though hipak knows the size of data it is storing
		in shared memory (when init() is called, it is told how
		many bits to use per entry), the new C routines assume
		we use a full word.  In the case of bit flags, I am
		therefore wasting 63 bits per flag!

	It would be interesting to see if you could make these games
	run distributed across multiple machines by replacing the check(),
	init(), getval(), putval(), addval(), lock() and unlock() shared
	memory routines with IPC calls back and forth to a game host.
	Unfortunately there are probably all kinds of bugs with lack of
	locking and those would be exascerbated by there being network
	time between calls.  Certainly my getval(), putval() and addval()
	calls all assume that they are dealing with local memory - there
	has been no coding to reduce such calls.  Though caching would
	be possible, I'd need to at least examine if not modify code flow
	in minute detail for each game.

	Ultimately, these games are TERRIBLY written.  It seems to me that
	if you were to put real work into them, the first thing to do would
	be to completely re-write them.  If I wanted them to continue to
	work on the DEC-10, I suppose I could create a version of gcc that
	produces Macro-10!

Bugs remaining:
    Risk:
	It appears that the computer may cheat in risk, where all of a
	sudden it has a bunch of troops in a location that couldn't have
	been created or moved there.

	The color scheme is awful.

As of 09/21/25, the Makefile seems to produce reasonable binaries with:
  f2c -v
   f2c (Fortran to C Translator) version 20200916.
  gcc -v
   gcc version 15.2.1 20250808 (Red Hat 15.2.1-1) (GCC) 

 Frankly, I was not able to get the GNU Fortran to work, probably
 due to standardizing and error checking added recently.  I haven't
 tried gfortran since 2010.  But converting the Fortran to C with f2c
 gets me through until gcc becomes soooo picky that we'd need to find
 another way.

 Of course, you could use kermit to transmit the .FOR and HIPAK.MAC files
 to your local DECsystem 1099 (if you have one kicking around) or perhaps
 a simulator such as SIMH.  The .mic file "make.mic" will help you build a
 Tops10 binary assuming you have the appropriate compilers installed.
 These guys worked with Tops10 603 up to 702 (I believe).

<hr>

<div id=docs>

## <a id='dt_8702msMe3'>cave.for</a>
A multi-user game to wander around in a cave made up of hexagons and monsters
In some ways based on the old Gygax Dungeons and Dragons.
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMe4'>cubic.for</a>
Play against the computer, first to get 4 in a line
10 USRPAK.MAC.

## <a id='dt_8702msMe5'>greebl.for</a>
Multi-user game where the ballons are out to get you!
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMe6'>life.for</a>
Yet another simulator for John Conway's game of life
Made with Bob Kenney's USRPAK.MAC.
Lots of things are configurable beyond Conway's original game.

## <a id='dt_8702msMe7'>ocean.for</a>
3-d multi-user game of boats, subs and choppers in a great big lake
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMe8'>risk.for</a>
A computerized version of the 1957 Hasbro game of Risk
Made with Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMe9'>scan.for</a>
Unfinished game in a 3-d multi-player universe
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMeA'>debug.for</a>
Routines to compile multi-user games against for debugging
Made with Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMeB'>regres.for</a>
A regression test for multi-user games
Made Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMeC'>settty.for</a>
Software to check if we're runnable and get terminal type from user
Made with Robert Kenney's HIPAK.MAC.

## <a id='dt_8702msMeD'>snake.for</a>
A program for getting supervisory privileges at UNH Dec-10
Seriously.  Embedded in the original version was a routine that
would go any job with my account and "poke" the privilege bit on.
Had to defang it as operators had stolen a copy and kept running
it.  Moves a a string of text around the script.  Bad then, that
was a novel concept.
Made with Robert Kenney's USRPAK.MAC.  Bob was an operator.
I'm just saying.

## <a id='dt_8702msMeE'>star.for</a>
My first multi-user game, Star Trek
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.
Based on Michael O'Shaughnessy's "star.bas"
Novel at the time because it had a continuously updating screen,
user and real time.  Drained enough resources from
the University's DEC10 that it was frequently banned.

## <a id='dt_8702msMeF'>system.for</a>
Multi-user game to program ships, ports, equipment to take over a galaxy
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.
More of a programmer's game than a war game.

## <a id='dt_8702msMeG'>war.for</a>
Multi-user game depicting the trench scene from the first Star Wars movie
Made with Roger Long's inspiration and Robert Kenney's HIPAK.MAC.
Note that this really wanted to be done with vector graphics
and not character cell graphics.  Waaaay ahead of the hardware.

## <a id='dt_8702msMeH'>hipak.mac</a>
Dec-10 assember support for multi-user games
Can also be compiled to usrpak.rel.

## <a id='dt_8702msMeI'>hipak.c</a>
C version of original Macro-10 assembler support for multi-user games</div>

<hr>
These games are still kind of fun, but no, they don't hold up to modern graphics.


