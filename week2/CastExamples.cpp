// CastExamples.cpp
//  Note function printf() is used.
//  it is found in the iostream library.
//  used to set the display format of the specified string.
//  in the examples below, it is used to change the precision displayed.

#include <iostream>

using namespace std;

int main()
{
    int a = 22;
    int b = 7;
    int c;
    float d;

    cout << "int a = 22,  int b = 7, int c, and float d..." << endl;
    // Case #1:

    c = a / b;

    cout << "Case 1:  c = a / b;"
         << "\t\t\t"
         << " c = " << c << endl;

    // Case #2:

    d = a / b;

    cout << "Case 2: d = a / b;"
         << "\t\t\t"
         << " d = " << d << endl;

    // Case #3:

    d = float(a / b);

    cout << "Case 3: d = float(a / b);"
         << "\t\t"
         << " d = " << d << endl;

    // Case #4:

    d = float(a) / float(b);

    cout << "Case 4: d = float(a) / float(b);" << '\t' << " d = " << d << endl; // note the ' ' on '/t'

    // Case #5:

    d = a / float(b);

    cout << "Case 5: d = a / float(b);"
         << "\t\t"
         << " d = ";
    printf("%0.6f\n", d);

    // Case #6:

    d = float(a) / b;

    cout << "Case 6: d = float(a) / b;"
         << "\t\t"
         << " d = ";
    printf("%0.3f\n", d);
    cout << endl;

    return 0;
}