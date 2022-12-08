// T4.cpp   Passing Multiple Arguments to a Thread Function

#include <thread>
#include <iostream>
#include <string>

using namespace std;

void greeting(string message, int i)
{
	for(int s = 0; s <= i; s++)
	cout << message << endl;
}

int main()
{
	string s = "Hello Thread!";
	int times = 10;
	thread t1(greeting,s, times);
	t1.join();
	return 0;

}
