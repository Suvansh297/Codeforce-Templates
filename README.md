Final.cpp contains the current template i am using.

debug.cpp is the debugging file. Make sure to save the proj/debug file in the same folder as your codes, and include the below piece of code in your template. (if you have saved debug.cpp or some other name then change the name in the below code).

#ifndef ONLINE_JUDGE
#include "proj.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

NOTE- by default, i_want_colored_output is set to true in the debugging file, it only works on terminal, turn it to 0 for white output if youre having issues.
