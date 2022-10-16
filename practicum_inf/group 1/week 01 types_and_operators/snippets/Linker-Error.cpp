#INCLUDE<IoStream>

using std::cin;
using std::cout;

/*
Linker Errors - Example

When the program is successfully compiled and attempting to link 
the different object files with the main object file, errors will occur.
When this error occurs, the executable is not generated.
This could be due to incorrect function prototyping, an incorrect header file, or other factors.


The errors in the current file are at:
	- line 1: should be #include<iostream>
	- line 19: Main should be lower case (main)
	- line 22: it is not stated from where to find endl
		we should either write "using std::endl" at line 5
		or replace endl with std::endl
*/

int Main()
{
	cout << "It looks like I'm not that smart :(" << endl;
	return 0;
}