#include <iostream>
#include <ctime>

using namespace std;
int main() {
	time_t current_time;

	current_time = time(0);

	cout << current_time << " seconds have passed since 00:00:00 GMT, Jan 1, 1970";

	return 0;
}