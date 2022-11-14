// NoTemplates.cpp 
// have to use a lot of overrides, and hope you have them all covered,

#include<iostream>

using namespace std;

int Half(int);
float Half(float);
char Half(char);   
double Half(double);


int i = 8;							
double d = 6.3;
float f = 4.2;
char c = 'a';
long l = 45;

int main()
{

  cout << "Half of int 8 is: " << Half(i) << endl;
  
  cout << "Half of double 6.3 is: " << Half(d) << endl;
  
  cout << "Half of float 4.2 is: " << Half(f) << endl;
  
  cout << "Half of char a is: " << Half(c) << endl;

  //cout << "Half of long l is: " << Half(l) << endl;           //uncomment this line & recompile.
                                                                                       //won't work.  Why?
  return 0;
}

int Half(int t)
{
    return t / 2;
}

float Half(float t)
{
  return t / 2;
}

char Half(char t)                               // google "ASCII CODE CHART"
{                                                         // 'a' = decimal value 97
  return t / 2;                                       // 97 / 2 = 48.5 (or 48), which is char value of 0
}

double Half(double t)
{
  return t / 2;
}
