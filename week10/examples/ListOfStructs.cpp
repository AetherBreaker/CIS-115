df//Example of using a list of structs
//This program requests input for three structs, 
//adds them into the list, sorts them by name, 
//and finally displays them.  

#include<iostream>
#include<list>
#include<string>

using namespace std;

// definition for the struct EmpRec

struct EmpRec{
       int    ID;
       string lastName;
       double rate;
};

EmpRec EmpList;
  
//Implementation of the list.  This is a list of type EmpRec called list1...
list<EmpRec> list1;

//Now we need an iterator for this list in order to display/print it out...

list<EmpRec>::iterator iter;


void AddRec();              //just Prototypes (see functions below)
void printList();

//This function, compare_list is needed to sort the list.
//list1.sort() will NOT work, (what will it sort on?).  
//compare_list uses what is called a predicate that returns a bool,
//in this case, it sorts on list1.lastName.

bool compare_list(const EmpRec &lhs,const EmpRec &rhs)
{   return lhs.lastName < rhs.lastName;
} 

int main()
{
    
    for(int x = 1; x < 4; x++)         
      AddRec();                        // add in three Structs...
      
    list1.sort(compare_list);          // sort them by last name...
 
    printList();
   
    cin.get();
    return 0;
}

void AddRec()
{
     cout << endl;
     cout << "Enter Employee ID: ";
     cin  >> EmpList.ID;
     cout << "Enter Employee Name: ";
     cin  >> EmpList.lastName;
     cout << "Enter Pay Rate: ";
     cin  >> EmpList.rate;
     list1.push_back(EmpList);  
}   

void printList()                   // display (or print) the list
{
    cout << endl << "Sorted List..." << endl << endl;
    cout << "ID" << "\t" << "Name" << "\t" << "Pay Rate" << endl;
    cout << "--------------------------" << endl; 
    
    for(iter = list1.begin(); iter != list1.end(); iter++)  
    {
             cout << iter->ID << "\t" << iter->lastName << "\t" << iter->rate <<endl;
    }
    cout << "--------------------------" << endl << endl;    
     
}
       
       
       
