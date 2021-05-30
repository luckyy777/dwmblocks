//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon, Command, Update Interval, Update Signal*/
	{" doge $", "printf '%0.2f' $(curl rate.sx/1doge)", 10, 0},
	{"", "echo $(pacman -Q | wc -l) packages", 60, 0},
	{"mem ", "free -h | grep Mem | awk '{print $3}' | sed s/Gi/gb/ | sed s/Mi/mb/", 5, 0},
	{"", "nmcli device | grep 'wifi ' | awk '{print $4}'", 1, 0},
	{"bat ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%", 1, 0},
	{"vol ", "pamixer --get-volume-human", 60, 10},
	{"", "date '+%a %d %b, %H:%M' ", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
