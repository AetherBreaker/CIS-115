// Arrays
// Jacob Ogden

#include <iostream>

using namespace std;

int Fill_array(double array[], int length)
{
    double input;

    for (
        int index = 0;
        index < length;
        index++
        )
    {
        cout << "Please enter a double value (eg: 3.72345): " << endl;
        cin >> input;
        array[index] = input;
    }

    return length;
}

void Show_array(double array[], int length)
{
    for (
        int index = 0;
        index < length;
        index++
        )
    {
        cout << "Array" << "\tIndex: " << index << "\tvalue: " << array[index] << endl;
    }
}

void Reverse_array(double array[], int length)
{
    double* newarray = new double[length];

    for (
        int oldindex = (length - 1), newindex = 0;
        oldindex > -1;
        oldindex--, newindex++
        )
    {
        newarray[newindex] = array[oldindex];
    }
    for (
        int index = 0;
        index < length;
        index++
        )
    {
        array[index] = newarray[index];
    }
}

void Reverse_part_array(double array[], int length)
{
    double* newarray = new double[length];

    for (
        int oldindex = (length - 1), newindex = 0;
        oldindex > -1;
        oldindex--, newindex++
        )
    {
        newarray[newindex] = array[oldindex];
    }
    for (
        int index = 1;
        index < length - 1;
        index++
        )
    {
        array[index] = newarray[index];
    }
}

int main()
{
    double myray[10];

    Fill_array(myray, 10);
    cout << endl;
    Show_array(myray, 10);
    cout << endl;
    Reverse_array(myray, 10);
    cout << endl;
    Show_array(myray, 10);
    cout << endl;
    Reverse_part_array(myray, 10);
    cout << endl;
    Show_array(myray, 10);
    cout << endl;

    return 0;
}