// poly2.cpp
// a simple example of polymorphism...
// now, using dynamic allocation

#include<iostream>
#include<string>

using namespace std;

int ctr = 1;

// a generic Employee Class

class Employee {                                    
public:
  Employee(string theName, float thePayRate);

  string getName() const;
  float getPayRate() const;

  float pay(float hoursWorked) const;

protected:
  string name;
  float payRate;
};

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

string Employee::getName() const
{
  return name;
}

float Employee::getPayRate() const
{
  return payRate;
}

float Employee::pay(float hoursWorked) const
{
  return hoursWorked * payRate;
}

// a Manager Class inherited from Employee...

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);

  bool getSalaried() const;

  float pay(float hoursWorked) const;

protected:
  bool salaried;
};

Manager::Manager(string theName,
                 float thePayRate,
                 bool isSalaried)
  : Employee(theName, thePayRate)
{
  salaried = isSalaried;
}

bool Manager::getSalaried() const
{
  return salaried;
}

//*** NOTE *** this pay function is overridden here and redefined...

float Manager::pay(float hoursWorked) const                 
{
  if (salaried)
    return payRate;
  else
    return Employee::pay(hoursWorked);
}

int main() 
{
    
  // Print out name and pay (based on 40 hours work).

  Employee emp("John Burke", 25.0);

  cout << "Name: " << emp.getName() << endl;
  cout << "Pay: " << emp.pay(40.0) << endl;

  Manager mgr("Jan Kovacs", 1200.0, true);

  cout << "Name: " << mgr.getName() << endl;
  cout << "Pay: " << mgr.pay(40.0) << endl;
  cout << "Salaried: " << mgr.getSalaried() << endl << endl << endl;
  
  Employee *empPtr;                 // base class pointer

  if(ctr == 1) 
     empPtr = new Employee("Dynamic Employee", 26.0);
  else 
     empPtr = new Manager("Dynamic Manager", 1550.0, true);
     
  cout << "Name: " << empPtr->getName() << endl;
  cout << "Pay rate: " << empPtr->getPayRate() << endl;

  delete empPtr;
     
  ctr++;
  
  if(ctr == 2) 
     empPtr = new Employee("John Employee", 25.0);
  else 
     empPtr = new Manager("Jan Manager", 1200.0, true);

  cout << "Name: " << empPtr->getName() << endl;
  cout << "Pay rate: " << empPtr->getPayRate() << endl;

  delete empPtr;

  return 0;
}

