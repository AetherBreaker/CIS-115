//BaseClassPtr2.cpp  
//example of base class pointers.
//compile and run.
//then, remove the virtual keyword, compile, and run.

#include<iostream>

using namespace std;

class base
{
    public:
        virtual void showClass()
        {
           cout << "ShowClass in base..." << endl;
        }
};
class derived : public base
{
    public:
        void showClass()
        {
           cout << "ShowClass in derived..." << endl;
        }
};

int main()
{
    base bClass;
    derived dClass;  
    base *ptr = &bClass;
    ptr->showClass();
    ptr = &dClass;
    ptr->showClass();
    
    return 0;
}

