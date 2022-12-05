//polymorph1.cpp 
//Another example of polymorphism.

#include<iostream>

using namespace std;

class fbplayer
{
    public:
        fbplayer()
        {
                speed = 2;
        }
        int speed;
        virtual void fbstats()
        {
           cout << "Basic Attributes..." << endl;
           cout << "Base Weight: 165 lbs" << endl;
           cout << "Base Height:  6 ft"   << endl;
           cout << "Speed (40 yards): " << speedCalc(speed) << endl;
           cout << "Catching Ability (1-10): 3 "  << endl << endl;
        }
        int speedCalc(int sp)
        {
           cout << "base speedCalc()" << endl;
           return sp * 1;
        }
};

class lineMan : public fbplayer
{
    protected:
        int linespeed;
    public:
        void fbstats()
        {
           cout << "Linemen Attributes..." << endl;
           cout << "Base Weight: 235 lbs" << endl;
           cout << "Base Height:  6 ft 3 in"   << endl;
           linespeed = 1;
           cout << "Speed (40 yards): " << speedCalc(linespeed) << endl;
           cout << "Catching Ability (1-10): 2 "  << endl << endl;
        }
        int speedCalc(int lnsp)
        {
          return lnsp * 3;
        }        

};

class Receiver : public fbplayer
{
    public:
        void fbstats()
        {
           cout << "Receiver Attributes..." << endl;
           cout << "Base Weight: 205 lbs" << endl;
           cout << "Base Height:  6 ft 1 in"   << endl;
           speed = 3;
           cout << "Speed (40 yards): " << speedCalc(speed) << endl;
           cout << "Catching Ability (1-10): 8 "  << endl << endl;
        }
        int speedCalc(int sp)
        {
           return sp * 4;
        }        

};

int main()
{
    lineMan  Center;
    Receiver TightEnd;
    fbplayer basic;
    
    fbplayer *fbptr = &Center;  
    fbptr->fbstats();

    fbptr = &TightEnd;  
    fbptr->fbstats();
    
    fbptr = &basic;  
    fbptr->fbstats();            
    
    
    return 0;
}


