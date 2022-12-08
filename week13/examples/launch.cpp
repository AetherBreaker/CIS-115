// launch.cpp. -  Launching a Thread
#include <iostream>
#include <thread>

using namespace std;

void backgroundTask()
{
	for(int i = 0; i < 15; i++)
	cout << "Doing Something...  " << i << endl;		
}

int main(int argc, char *argv[]) 
{
	std::thread t((backgroundTask));

	std::thread t1((backgroundTask));
	
	t.join();									// join = “wait for the thread to terminate.”
	t1.join();
	return 0;	
}