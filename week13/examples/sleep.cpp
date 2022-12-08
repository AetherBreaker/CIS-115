//sleep.cpp

#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

int main()
{
    cout << "Start..." << endl;
    
	chrono::milliseconds sleepDuration(2000);

	this_thread::sleep_for(sleepDuration);
	
	cout << "End!" << endl;
	
	return 0;
}
