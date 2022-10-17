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

void Reverse_array(double array[], int length)[]
{


}

int main()
{
    double x[11] = { 1.51, 2.515, 3.125, 4.0, 5.91, 6.2924, 7.9195, 8.09, 9.1, 10.49178 };

    Show_array(x, 11);

    return 0;
}