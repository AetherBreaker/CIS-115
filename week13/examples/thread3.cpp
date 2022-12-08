//thread3cpp  - using time delay

#include <iostream>
#include <thread>
#include <string>
#include <chrono>					//for sleep
   
using namespace std;

chrono::milliseconds sleepDuration(10);		




void foo(int x)
{
	for(; x < 100; x = x + 2)
		{
			cout << x << ", ";
			this_thread::sleep_for(sleepDuration);
		}
	cout << endl << endl;
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

