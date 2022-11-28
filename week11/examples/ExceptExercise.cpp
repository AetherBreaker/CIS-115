// This program demonstrates a simple recursive function.
// Modify it for your exception handling homework...
// X.14.10 (∗2) Write a program consisting of functions calling each other to a calling depth of 10. 
// Give each function an argument that determines at which level an exception is thrown. 
// The main function prompts for and receives input that specifies the calling depth (level) at which 
// an exception will be thrown. The main function than calls the first function. The main function catches 
// the exception and displays the level at which the exception was thrown. Do not forget the case in which 
// the depth is 0, where main must both throw and catch the exception. 

// Hint: You could use 10 different functions or 10 copies of the same function that call one another, 
// but do not do this. Rather, for compact code, use a main function that calls another function which then calls itself recursively. 
// Suppose you do this; is the restriction on the calling depth necessary? This can be done without giving the function any additional arguments, but
// if you cannot do it that way, try adding an additional argument to the function.  

#include <iostream>

using namespace std;

// Function prototype
void foo(int);

int main()
{
	foo(5);
	return 0;
}

void foo(int times)
{
	cout << "foo called with " << times << " in times." << endl;
	if (times > 0)
	{
		cout << "This is a recursive function." << endl;
		foo(times - 1);
	}
	cout << "foo returning with " << times;
	cout << " in times." << endl;
}
