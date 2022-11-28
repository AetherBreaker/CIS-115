// exception3.cpp   
// Practical Example of throwing an exception

#include <iostream>
#include <string>

float quotient;
int n = 10;
int d = 2;

using namespace std;

float divide(int, int);


int main () 
{

    cout << "Enter two Numbers... ";
    cin  >> n >> d;
    
    try 
    {
        quotient = divide(n, d);
        cout << "The quotient is " << quotient << endl;
    }
  
    catch (string e)
    {
        cout << e << endl;
        return 0;
    }

    cout << "End of Program" << endl;

    return 0;
}

float divide(int numerator, int denominator)
{
    if (denominator == 0)
    {            
      string strg = "ERROR -- Cannot divide by zero.";
      throw strg;
    }
    else
      return float(numerator) / denominator;
}

