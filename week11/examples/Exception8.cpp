// Exception8.cpp
// If you ever need to catch all exceptions, regardless of their type, 
// there is a special argument for catch which allows you to do so...


#include <iostream>

using namespace std;

int main()
{
  try  {
    throw 10;
  }
  catch (char *excp)  {
    cout << "Caught " << excp;
  }
  catch (...)  {
    cout << "Default Exception\n";
  }
  return 0;
}