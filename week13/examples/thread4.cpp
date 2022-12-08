//thread4.cpp
//using mutex 

#include <iostream>
#include <thread>
#include <string>
#include <chrono>					//for sleep
   
using namespace std;

std::mutex m;
chrono::milliseconds sleepDuration(10);								

void foo(int x)
{
	m.lock();
	for(; x < 100; x = x + 2)
		{
			cout << x << ", ";
			this_thread::sleep_for(sleepDuration);
		}
	cout << endl << endl;
	m.unlock();
}



int main(int argc, char *argv[]) {
	
	cout << "Start..." << endl;
	
	thread t1 (foo, 2);
	thread t2 (foo,1);
	t1.join();
	t2.join();
	foo(1);	
	
	cout << "End!" << endl;
	
	return 0;

}

