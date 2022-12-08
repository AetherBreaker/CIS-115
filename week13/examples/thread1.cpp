// thread1.cpp.  a thread example
#include <iostream>       // std::cout
#include <thread>         	// std::thread

using namespace std;
 
void foo() 
{
	cout << "in foo..." << endl;
}

void bar(int x)
{
	cout << "in bar..." << endl;
}

int main() 
{
	std::thread first (foo);     // spawn new thread that calls foo()
	std::thread second (bar,0);  // spawn new thread that calls bar(0)

	std::cout << "main, foo and bar now execute concurrently..." << endl;

	// synchronize threads:
	first.join();                	// pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "foo and bar completed." << endl;
	
	return 0;
}