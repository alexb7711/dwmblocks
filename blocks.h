//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        /* {"" , "~/code/suckless/dwmblocks/scripts/timerunning"                , 60 , 0} , */
        {"☄"  , "~/code/suckless/dwmblocks/scripts/cpu_usage"                  , 30  , 0} ,
        {"🪐"  , "~/code/suckless/dwmblocks/scripts/memory"                  , 30 , 0} ,
        {""  , "~/code/suckless/dwmblocks/scripts/bandwidth"                  , 5  , 4} ,
        {"🔊" , "~/code/suckless/dwmblocks/scripts/volume"                     , 10  , 0} ,
        /* {":"  , "~/code/suckless/dwmblocks/scripts/battery | tr \'\n\' \' \' " , 5  , 0} , */
        {"🗓"  , "~/code/suckless/dwmblocks/scripts/date"                        , 60  , 0} ,
        {"🕑"  , "~/code/suckless/dwmblocks/scripts/clock"                      , 5  , 0} ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char* delim = "|";
