// Template1.cpp An example of Template Use.

#include<iostream>

using namespace std;

template <class T>	  // defines T as an abitrary data type.
T halfIt(T a)		          // return type is T, a is a variable of type T
{
  return(a / 2);
}

int i = 8;							
double d = 6.3;
float f = 4.2;
char c = 'a';
long l = 45;
int main()
{
  
  cout << "Half of int 8 is: " << halfIt(i) << endl;
  
  cout << "Half of double 6.3 is: " << halfIt(d) << endl;
  
  cout << "Half of float 4.2 is: " << halfIt(f) << endl;
  
  cout << "Half of char a is: " << halfIt(c) << endl;
  
  cout << "Half of long l is: " << halfIt(l) << endl;           
  
  return 0;
}

