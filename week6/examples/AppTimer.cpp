//AppTimer.cpp 
//C++ program to find out execution time of functions
// reference:  https://www.cplusplus.com/reference/chrono/high_resolution_clock/now/

#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;		// chrono needs its own namespace as it was designed that way.
								// possibly to avoid conflicts with similar functions.	


int main()
{

	high_resolution_clock::time_point stime = high_resolution_clock::now();	//start clock
	
	//put your code (or function call) you wish to time here...
	
	high_resolution_clock::time_point etime = high_resolution_clock::now();	//end clock
	
	duration<double> time_span = duration_cast<duration<double>>(etime - stime);
	
	cout << "Time taken by function: " << time_span.count() << " seconds.";

	return 0;
}
