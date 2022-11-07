// file9.cpp
#include<iostream>
#include<fstream>
#include <chrono>

using namespace std;
using namespace std::chrono;	
long z = 0;
int main()
{
	fstream tFile;
	
	tFile.open("test.txt", ios::out);
	
	high_resolution_clock::time_point stime = high_resolution_clock::now();	//start clock

	for(int x = 0; x < 100000; x++)
	{
		tFile << "Hello Word! " << ++z << endl;
	}	
	
	high_resolution_clock::time_point etime = high_resolution_clock::now();	//end clock
	
	duration<double> time_span = duration_cast<duration<double>>(etime - stime);
	
	cout << "Time taken by function: " << time_span.count() << " seconds.";
	
	tFile.close();
	
	return 0;
}
