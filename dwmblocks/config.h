// d Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
  {"",	"sb-tasks",	10,	26},
  {"",	"sb-pomo",	1.1,	1},
  {"",	"sb-mailbox",	180,	12},
  {"",	"sb-battery",	5,	3},
  {"",	"sb-clock",	60,	1},
  {"",	"sb-internet",	5,	4},
  {"",	"sb-moonphase",	18000,	17},
  {"",	"sb-pacpackages",	0,	8},
  {"",	"sb-memory",	10,	14},
  {"",	"sb-volume",	0,	10},
  /* {"⌨", "sb-kbselect", 0, 30}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }


// Block delimiter and paddings
/* static char delim[] = "^c#313131^^f4^^r0,0,1,19^^f5^^d^"; */
/* static char lpad[] = "^f-1^^c#313131^^r0,0,1,19^^f5^^d^"; */
/* static char rpad[] = "^f5^"; */
