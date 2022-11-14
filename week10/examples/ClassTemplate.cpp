// ClassTemplat.cpp 
// A simple example of using a class template

#include<iostream>

using namespace std;

int i;

float f;

template <typename T>	             // class template triple
class triple 
{
      public:
             
             T cube(T b)
             {
               return ( b * b * b );
               }
};

int main()
{  
    triple<int> I;                    // instantiate object i of type triple using ints.   
    
    cout << "Enter an int:  ";
    cin >> i;
    
    cout <<  "int  " << i << " cubed is  " << I.cube(i) << endl;
    
  
    cout << "Enter a floatt:  ";
  
    cin >> f;
  
    triple<float> F;                // instantiate object F of type triple using floats.   
  
    cout <<  "float " << f  << " cubed is " << F.cube(f) << endl;

    
  return 0;
}
