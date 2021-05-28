//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		              /*Update Interval*/	/*Update Signal*/
	{" bat ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%",  1,                        0},
	{"vol ", "pamixer --get-volume-human",                 0,                        10},
	{"", "date '+%a %d %b, %H:%M' ", 		       5,	                 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
