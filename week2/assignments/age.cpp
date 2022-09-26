#include <iostream>

using namespace std;

int ageyears;
int agemonths;
int agedays;

int long totalseconds;
float totalhours;
float totaldays;
float totalweeks;
float totalmonths;
float totalyears;

const int minseconds = 60;
const int hourseconds = 3600;
const int dayseconds = 86400;
const int weekseconds = 604800;
const int monthseconds = 2628000;
const int yearseconds = 31540000;

int main()
{
    cout << "Input your age in the following parts:" << endl;
    cout << "Years:" << endl;
    cin >> ageyears;

    cout << "Months:" << endl;
    cin >> agemonths;

    cout << "Days:" << endl;
    cin >> agedays;

    totalseconds = ageyears * yearseconds + agemonths * monthseconds + agedays * dayseconds;
    totalhours = totalseconds / float(hourseconds);
    totaldays = totalseconds / float(dayseconds);
    totalweeks = totalseconds / float(weekseconds);
    totalmonths = totalseconds / float(monthseconds);
    totalyears = totalseconds / float(yearseconds);

    cout << "Age in years: " << totalyears << endl;
    cout << "Age in months: " << totalmonths << endl;
    cout << "Age in weeks: " << totalweeks << endl;
    cout << "Age in days: " << totaldays << endl;
    cout << "Age in hours: " << totalhours << endl;
    cout << "Age in seconds: " << totalseconds << endl;

    return 0;
}