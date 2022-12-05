// midterm.cpp

#include <iostream>
#include <list>

using namespace std;

int x = 2; 
int *p = &x;
int *s = p;
int  **t = &s;
int *z = new int(8);
int *q = z;



int main(int argc, char *argv[]) 
{
		cout << "1. &x " << &x << endl;
		cout << "2. *p " << *p << endl;
		cout << "3. **t " << **t << endl;
		cout << "4. *t " << *t << endl;
		cout << "5. t " << t << endl << endl;
		cout << "6. &s " << &s << endl;
		cout << "7. z " << z << endl;
		cout << "8. *q " << z << endl;
		
		
		return 0;
}

