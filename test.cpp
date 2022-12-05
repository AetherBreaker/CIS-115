#include <iostream>

using std::cout;
using std::endl;

int x = 2;
int *p = &x;
int *s = p;
int **t = &s;
int *z = new int(8);
int *q = z;

int main() {
    cout << "&x = " << &x << endl;
    cout << "*p = " << *p << endl;
    cout << "**t = " << **t << endl;
    cout << "*t = " << *t << endl;
    cout << "t = " << t << endl;
    cout << "z = " << z << endl;
    cout << "*q = " << *q << endl;
}