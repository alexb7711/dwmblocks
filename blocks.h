//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" :" , "~/code/suckless/dwmblocks/scripts/timerunning"                , 60 , 0} ,
        {"﬙:"  , "~/code/suckless/dwmblocks/scripts/cpu_usage"                  , 5  , 0} ,
        {":"  , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g"      , 30 , 0} ,
        {":"  , "~/code/suckless/dwmblocks/scripts/bandwidth"                  , 5  , 4} ,
        {"墳:" , "~/code/suckless/dwmblocks/scripts/volume"                     , 5  , 0} ,
        {":"  , "~/code/suckless/dwmblocks/scripts/battery | tr \'\n\' \' \' " , 5  , 0} ,
        {":"  , "~/code/suckless/dwmblocks/scripts/clock"                      , 5  , 0} ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
