// poly1.cpp
// a simple example of polymorphism...
// (focus on the pay function)

#include<iostream>
#include<string>

using namespace std;

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

  Employee empl("John Burke", 25.0);

  cout << "Name: " << empl.getName() << endl;
  cout << "Pay: " << empl.pay(40.0) << endl;

  Manager mgr("Jan Kovacs", 1200.0, true);

  cout << "Name: " << mgr.getName() << endl;
  cout << "Pay: " << mgr.pay(40.0) << endl;
  cout << "Salaried: " << mgr.getSalaried() << endl;

  return 0;
}
