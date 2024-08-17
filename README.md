Final.cpp contains the current template i am using.  <br/>

debug.cpp is the debugging file. Make sure to save the proj/debug file in the same folder as your codes, and include the below piece of code in your template. (if you have saved debug.cpp or some other name then change the name in the below code).  <br/>

#ifndef ONLINE_JUDGE   <br/>
#include "proj.cpp"  <br/>
#else  <br/>
#define debug(...)  <br/>
#define debugArr(...)  <br/>
#endif  <br/>

NOTE- by default, i_want_colored_output is set to true in the debugging file, it only works on terminal, turn it to 0 for white output if youre having issues.  <br/>


IF you are using sublime text like me, install ANSIescape package and add it to your build system to get colored output in sublime log. Happy coding!
