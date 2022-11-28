// exceptDefault.cpp
// exception handling example in a complete program

// NOTE:  Never throw exception objects that are string literals.
// (see the commented line below in the float function)
// The reason is that these exception objects should eventually be caught, 
// and they're caught based on their type, not on their value.
// The practical effect of throwing and catching string literals 
// is that almost no information about the exception is encoded 
//  in the type of the exception object.


#include <iostream>

using namespace std;

float divide(int, int);

int main () 
{
    int num1, num2;
    float quotient;
    cout << "Enter 2 Numbers: ";
    cin  >> num1 >> num2;
    
    try
    {
        quotient = divide(num1, num2);
        cout << "The Quotient is " << quotient << endl;
    }
    catch (string exceptionString)
    {
        cout << exceptionString << endl;
        return 0;
    }
    
    cout << "Normal End of Program..." << endl;
    return 0;
}

float divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
//      throw "ERROR -- Cannot divide by zero!";  
        string ss = "ERROR -- Cannot divide by zero!";
        throw ss;
    }
    else 
        return float (numerator / denominator);
}
