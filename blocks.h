//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" CPU:"    , "~/Code/dwmblocks/scripts/cpu_usage"                      , 5  , 0}  ,
        {"Memory:"  , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g" , 30 , 0}  ,
        {""         , "~/Code/dwmblocks/scripts/bandwidth"                      , 5  , 4}  ,
        {""         , "~/Code/dwmblocks/scripts/volume"                         , 5  , 0} ,
        {"Battery:" , "~/Code/dwmblocks/scripts/battery | tr \'\n\' \' \' "     , 5  , 0}  ,
        {""         , "~/Code/dwmblocks/scripts/clock"                          , 5  , 0}  ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
