//@HDR@	$Id$
//@HDR@		Copyright 2024 by
//@HDR@		Christopher Caldwell/Brightsands
//@HDR@		P.O. Box 401, Bailey Island, ME 04003
//@HDR@		All Rights Reserved
//@HDR@
//@HDR@	This software comprises unpublished confidential information
//@HDR@	of Brightsands and may not be used, copied or made available
//@HDR@	to anyone, except in accordance with the license under which
//@HDR@	it is furnished.
HTTP/1.1 200 OK
Content-type: text/html
Connection: Closed

<!doctype html><html lang=en><HEAD>
<META HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=utf=8">
    <script>
	var events_so_far = "";
	var MAXROW = 24;
	var MAXCOL = 80;
	var MVCMD = " ";

	function ccode( s )
	    { return s.charCodeAt(0); }

	var BASECHAR = ccode(MVCMD) + 1;
	var URL = "";
	var rep_id;
	var frame_id;
	var debug_id;

	var shiftcons		= 1000;
	var controlcons		= 2000;

	var serial		= 2;

	var cmap =
	    {
	    8:8,		// Backspace
	    9:9,		// Tab
	    13:13,		// Return
	//    16:"shift",
	//    17:"ctrl",
	//    18:"alt",
	//    19:"pausebreak",
	//    20:"capslock",
	    27:27,		// Escape
	    32:32,		// Space
	//    33:"pageup",
	//    34:"pagedown",
	//    35:"end",
	//    36:"home",
	//    37:"left",
	//    38:"up",
	//    39:"right",
	//    40:"down",
	    43:ccode('+'),
	//    44:"printscreen",
	//    45:"insert",
	    46:127,		// Delete
	    59:ccode(';'),
	    61:ccode('='),
	    106:ccode('*'),
	    107:ccode('+'),
	    109:ccode('-'),
	    110:ccode('.'),
	    111:ccode('/'),
	//    112:"f1",
	//    113:"f2",
	//    114:"f3",
	//    115:"f4",
	//    116:"f5",
	//    117:"f6",
	//    118:"f7",
	//    119:"f8",
	//    120:"f9",
	//    121:"f10",
	//    122:"f11",
	//    123:"f12",
	//    144:"numlock",
	//    145:"scrolllock",
	    186:ccode(';'),
	    187:ccode('='),
	    188:ccode(','),
	    189:ccode('-'),
	    190:ccode('.'),
	    191:ccode('/'),
	    192:ccode('`'),
	    219:ccode('['),
	    220:ccode('\\'),
	    221:ccode(']'),
	    222:ccode('\'')
	    };
	cmap[48+shiftcons]=ccode(')'),	// Shifted codes
	cmap[49+shiftcons]=ccode('!'),
	cmap[50+shiftcons]=ccode('@'),
	cmap[51+shiftcons]=ccode('#'),
	cmap[52+shiftcons]=ccode('$'),
	cmap[53+shiftcons]=ccode('%'),
	cmap[54+shiftcons]=ccode('^'),
	cmap[55+shiftcons]=ccode('&'),
	cmap[56+shiftcons]=ccode('*'),
	cmap[57+shiftcons]=ccode('('),
	cmap[59+shiftcons]=ccode(':'),
	cmap[61+shiftcons]=ccode('+'),
    //    cmap[96+shiftcons]="insert",
    //    cmap[97+shiftcons]="end",
    //    cmap[98+shiftcons]="down",
    //    cmap[99+shiftcons]="pagedown",
    //    cmap[100+shiftcons]="left",
    //    cmap[102+shiftcons]="right",
    //    cmap[103+shiftcons]="home",
    //    cmap[104+shiftcons]="up",
    //    cmap[105+shiftcons]="pageup",
	cmap[109+shiftcons]=ccode('_'),
	cmap[188+shiftcons]=ccode('<'),
	cmap[189+shiftcons]=ccode('>'),
	cmap[191+shiftcons]=ccode('?'),
	cmap[192+shiftcons]=ccode('~'),
	cmap[219+shiftcons]=ccode('{'),
	cmap[220+shiftcons]=ccode('|'),
	cmap[221+shiftcons]=ccode('}'),
	cmap[222+shiftcons]=ccode('\"')

	function addmap( fromind, toind, retval )
	    {
	    while( fromind <= toind )
		{ cmap[fromind++] = retval++; }
	    }

	addmap( ccode('0'),		ccode('9'),		ccode('0') );
	addmap( ccode('0')+48,		ccode('9')+48,		ccode('0') );
	addmap( ccode('A'),		ccode('Z'),		ccode('a') );
	addmap( ccode('A')+shiftcons,	ccode('Z')+shiftcons,	ccode('A') );
	addmap( ccode('A')+controlcons,	ccode('Z')+controlcons,	1 );

	var colors = "black,red,green,yellow,blue,purple,cyan,white".split(",");

	var color_to_html = new Array();

	function command( cmd )
	    {
	    events_so_far += "command("+cmd+") called.\n";
	    var pieces = new Array();
	    pieces.push( serial );
	    var cmdi;
	    for( cmdi=0; cmdi<cmd.length; cmdi++ )
	        {
		pieces.push( cmd.charCodeAt(cmdi) );
		}
	    var msg = URL + pieces.join('/');
	    frame_id.src = msg;
	    events_so_far += "command("+cmd+") sent ["+msg+"].\n";
	    }

	function got_character(evt)
	    {
	    events_so_far += "got_character() called.\n";
	    var evt = (evt ? evt : ((event) ? event : null ) );
	    var res =
		( evt.shiftKey	? cmap[ evt.keyCode + shiftcons ]
		: evt.ctrlKey	? cmap[ evt.keyCode + controlcons ]
		:			cmap[ evt.keyCode ] );
	    command( String.fromCharCode(res) );
	    events_so_far += "got_character() called.\n";
	    }

	function got_character_s(evt)
	    {
	    events_so_far += "got_character_s() called.\n";
	    got_character(evt);
	    events_so_far += "got_character_s() done.\n";
	    }

	function get_update()
	    {
	    events_so_far += "get_update() called.\n";
	    frame_id.src = URL + serial;
	    events_so_far += "get_update() done.\n";
	    }

	var chrsat = new Array();
	function setup()
	    {
	    events_so_far += "setup called.\n";
	    rep_id	= document.getElementById("rep_id");
	    frame_id	= document.getElementById("frame_id");
	    debug_id	= document.getElementById("debug_output");
	    var row, col;
	    var empty = String.fromCharCode(BASECHAR) + " ";
	    for( row=0; row<MAXROW; row++ )
	        {
		chrsat[row] = new Array();
		for( col=0; col<MAXCOL; col++ )
		    chrsat[row][col] = empty;
		}
	    for( var fg in colors )
		{
		if( ! colors[fg] ) { alert("Fg="+fg+" has no color."); }
		for( var bg in colors )
		    {
		    if( ! colors[bg] ) { alert("Bg="+bg+" has no color."); }
		    var ind = fg*8 + bg*1 + BASECHAR*1;
		    color_to_html[ String.fromCharCode(ind) ]
			= "background:"+colors[bg]+";color:"+colors[fg];
		    }
		}
	    self.setInterval("get_update();",3000);
	    document.onkeydown = got_character_s;
	    events_so_far += "setup done.\n";
	    }

	function upd_screen( next_serial, text )
	    {
	    events_so_far += "upd_screen("+next_serial+") started.\n";
	    var last_chunk;
	    // alert("Received serial="+serial+", text=["+text+"]");
	    var mvcmds = text.split( MVCMD );
	    var debug_so_far = "";
	    for( var mvcmdsi in mvcmds )
		{
		if( /^(.)(.)(.*)$/.test(mvcmds[mvcmdsi]) )
		    {
		    var row = ccode(RegExp.$1) - BASECHAR;
		    var col = ccode(RegExp.$2) - BASECHAR;
		    var chars_here = RegExp.$3;
		    if( row<0 || row>=MAXROW || col<0 || col>=MAXCOL )
		        {
			alert("Out of range:  "+row+","+col+":  ["+chars_here+
			    "]");
			}
		    debug_so_far += row + "," + col + ":" + chars_here + "<br>";
		    while( /^(..)(.*)$/.test(chars_here) )
			{
			chars_here = RegExp.$2;
			chrsat[row][col++] = RegExp.$1;
			}
		    last_chunk = mvcmds[mvcmdsi];
		    }
		}

	    events_so_far += "upd_screen("+next_serial+") chrsat updated, updating screen.\n";
	    serial = next_serial;

	    var row, col;
	    var last_col = "";
	    var s = "";
	    var have_not_puked = 1;
	    for( row=0; row<MAXROW; row++ )
	        {
		for( col=0; col<MAXCOL; col++ )
		    {
		    var colcod = chrsat[row][col].split("");
		    debug_so_far += colcod[1];
		    if( colcod[0] != last_col )
		        {
			if( last_col != "" ) { s += "</span>"; }
			last_col = colcod[0];
			if( ! color_to_html[last_col] && have_not_puked )
			    {
			    alert("("+row+","+col+") last_col=["+last_col+"]");
			    have_not_puked = 1;
			    }
			s += "<span style='"
			    + color_to_html[last_col]
			    + "'>";
			}
		    s += colcod[1];
		    }
		s += "<br>";
		debug_so_far += "<br>";
		}
	    s += "</span>";
	    rep_id.innerHTML = s;
	    // debug_id.innerHTML = ("serial="+serial+", len="+text.length+", slen="+s.length+"<br>"+debug_so_far);
	    events_so_far += "upd_screen("+next_serial+") done.\n";
	    }

	function all_done()
	    {
	    window.location = "/~chris/games.cgi";
	    }

    </script>

</head>
