// iQuote
// Jacob Ogden

#include<iostream>

using namespace std;

void iQuote(int a)
{
    cout << "This is an integer: \"" << a << '"' << endl;
}

void iQuote(double a)
{
    cout << "This is a double: \"" << a << '"' << endl;
}

void iQuote(float a)
{
    cout << "This is a float: \"" << a << '"' << endl;
}

void iQuote(char a)
{
    cout << "This is a char: \"" << a << '"' << endl;
}

void iQuote(string a)
{
    cout << "This is a string: \"" << a << '"' << endl;
}

int main()
{
    iQuote(8);
    iQuote(0.1);
    iQuote('u');
    iQuote(2134518.800000001235112651);
    iQuote("eight");

    return 0;
}