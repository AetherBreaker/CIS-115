// ifElseIf2.cpp
// An example of the WRONG way to use an if/else if statement
// How would you corrext this code?

#include <iostream>
using namespace std;

int main()
{
    int testScore;
    char grade;

    cout << "An Example of Using WRONG if/else logic." << endl;
    cout << "(can you explain why it is wrong?)" << endl
         << endl;

    cout << "Enter your numeric test score: ";
    cin >> testScore;

    if (testScore <= 100)
        grade = 'A';
    else if (testScore < 90)
        grade = 'B';
    else if (testScore < 80)
        grade = 'C';
    else if (testScore < 70)
        grade = 'D';
    else if (testScore < 60)
        grade = 'F';

    cout << "Your grade is " << grade << endl;

    return 0;
}
