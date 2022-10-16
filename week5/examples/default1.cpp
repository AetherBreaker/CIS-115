// default1.cpp - example of using default arguments in functions.
// try changing the default value of w in the prototype to 2,
// recompile and run.  What happens?  

#include <iostream>

using namespace std;

//Function Prototype
//the function's default arguments should be assigned in the
//EARLIEST occurrence of the function name.
//In this case, in the protoype

int sum(int x, int y, int z = 0, int w = 0);
 
// A function with default arguments, it can be called with 
// 2 arguments or 3 arguments or 4 arguments.
 
int main(int argc, char *argv[])
{
	cout << sum(10, 15) << endl;
	cout << sum(10, 15, 25) << endl;
	cout << sum(10, 15, 25, 30) << endl;
	return 0;
}

int sum(int x, int y, int z, int w)
{
	return (x + y + z + w);
}
