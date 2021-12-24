#define PATH(x) "$HOME/src/dwmblocks/modules/"x

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",              PATH("mpd"),                                                  0,      4}, */
	{" ",              PATH("internet"),                                              0,      3},
	/* {"",              PATH("calcurse_block"),                                       5,      0}, */
	/* {"",              PATH("bluetooth"),                                            5,      0}, */
	{"",              PATH("battery"),                                              5,      0},
	{"",              PATH("memory"),                                               10,     0},
	{"",              PATH("vol"),                                                  0,      1},
	{"",              PATH("brightness"),                                           0,      2},
	{"",              PATH("datetime"),					                            5,	    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
