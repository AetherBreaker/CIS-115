//exceptionClass2.cpp
//An example of an exception class implementation 
//instead of throwing an int, or another primitive value,
//an exception class is thrown.   

#include <iostream>

using namespace std;

class IntRange
{
    private:
        int input;
        int low;
        int upper;
        
    public:
    
        class OutOfRange             
        {
           public:
               OutOfRange(int i)
              {
                  std::cout << "That value: " << i << " is out of range!" << std::endl;
              } 
        };
            
        IntRange(int lower, int high)
        {
            low = lower;
            upper  = high;
        } 
        
        int getInput()
        {
          cin >> input;
          if (input < low || input > upper)
              throw OutOfRange(input);
          return 0;
        }
};


int main(int argc, char *argv[])
{
   IntRange Range(5, 10);
    int userValue;
    
    cout << "Enter a value in the range of 5 - 10: ";
    
    try 
    {
        userValue = Range.getInput();
        cout << "You Entered: " << userValue << endl;
    }
    catch(IntRange::OutOfRange(ex))
    {
      //  cout << "That value: " << ex.value << " is out of range!" << endl;
    } 
    
    return 0;
}    
