// T3.cpp   Passing an Argument to a Thread Function

#include <thread>
#include <iostream>
#include <string>

using namespace std;

void greeting(string message)
{
	cout << message << endl;
}

int main()
{
	string s = "Hello Thread!";
	thread t1(greeting,s);
	t1.join();
	return 0;

}
