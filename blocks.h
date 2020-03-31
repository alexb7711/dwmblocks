//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"P:", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	
        // {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
        {" CPU:", "~/Code/dwmblocks/scripts/cpu_usage",	30,		0},
        {"Memory:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	// {"V:", "~/bin/statusbar/volume",						0,		10},

	// {"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
	

	// {"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},
	// {"T:", "sensors | awk '/^temp1:/{print $2}'",				5,		0},
        {"", "~/Code/dwmblocks/scripts/bandwidth",				5,		4},
        {"", "~/Code/dwmblocks/scripts/volume",				5,		4},

        {"Battery:", "~/Code/dwmblocks/scripts/battery | tr \'\n\' \' \' ",						5,		0},
        {"", "date '+%D|%I:%m %p '",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
