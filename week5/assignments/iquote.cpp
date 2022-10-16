// iQuote
// Jacob Ogden

#include<iostream>

using namespace std;

void print(int a)
{
    cout << "This is an integer: \"" << a << '"' << endl;
}

void print(double a)
{
    cout << "This is a double: \"" << a << '"' << endl;
}

void print(float a)
{
    cout << "This is a float: \"" << a << '"' << endl;
}

void print(char a)
{
    cout << "This is a char: \"" << a << '"' << endl;
}

void print(string a)
{
    cout << "This is a string: \"" << a << '"' << endl;
}

int main()
{
    print(8);
    print(0.1);
    print('u');
    print(2134518.800000001235112651);
    print("eight");

    return 0;
}