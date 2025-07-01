//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
        /* {""    , "~block_timerunning"                 , 60  , 0} , */
        {"☄"      , "~block_cpu_usage"                   , 30  , 0} ,
        {"🪐"     , "block_memory"                       , 30  , 0} ,
        {""       , "~block_bandwidth"                   , 5   , 4} ,
        {"🔊"     , "~block_volume"                      , 10  , 0} ,
        /* {":"  , "~block_battery | tr \'\n\' \' \' "  , 5   , 0} , */
        {"🗓"     , "~block_date"                        , 60  , 0} ,
        {"🕑"     , "~block_clock"                       , 5   , 0} ,
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char* delim = "|";
