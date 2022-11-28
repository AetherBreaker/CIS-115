//exceptionClass1.cpp
//An example of an exception class implementation 
//instead of throwing an int, or another primitive value,
//an exception class is thrown.   

#include <iostream>

using namespace std;

class IntRange
{
    private:
        int input;
        int lower;
        int upper;
        
    public:
        class OutOfRange           // Exception Class
        {};
                                               
        IntRange(int low, int high);
        
        int getInput();
};

              
IntRange::IntRange(int low, int high)
{
        lower = low;
        upper = high;
}
        
int IntRange::getInput()
{
        cin >> input;
        if (input < lower || input > upper)
                  throw OutOfRange();
        return input;
}


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
    catch(IntRange::OutOfRange)
    {
        cout << "That value is out of range!" << endl;
    }
    
    return 0;
}
