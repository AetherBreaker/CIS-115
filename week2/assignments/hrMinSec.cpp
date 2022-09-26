#include <iostream>

using namespace std;

long int secondsinput;
int hourscount;
int dayscount;

const int secinmin = 60;
const int secinhour = 3600;
const int secinday = 86400;

int main()
{
    cout << "Input a time in seconds:" << endl;
    cin >> secondsinput;

    dayscount = secondsinput / secinday;
    secondsinput = secondsinput % secinday;

    hourscount = secondsinput / secinhour;
    secondsinput = secondsinput % secinhour;

    cout << "Days: " << dayscount << "\nHours: " << hourscount << "\nSeconds: " << secondsinput << endl;

    return 0;
}