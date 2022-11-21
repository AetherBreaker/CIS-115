#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

char F = 'f';
char *charptr = &F;

int intarr[10] = {1,2,3,4,5,6,7,8,9,10};

int *intptr = intarr;

string strs[3] = {"one", "two", "three"};
string *strptr = strs;

char **charptr2 = &charptr;

const int cdot = 10;
const int *ptrconst = &cdot;
const int *const constptr = &cdot;

int main() {
    cout << "charptr: '" << *charptr << '\'' << endl;

    cout << "intarr: {";
    for (int i : intarr)
        cout << i << (i >= 10 ? '}' : ',');
    cout << endl;

    cout << "intptr: {";
    for (int i = 0; i < 10; i++)
        cout << intptr[i] << (i >= 9 ? '}' : ',');
    cout << endl;

    cout << "strptr: {";
    for (int i = 0; i < 3; i++)
        cout << '"' << strptr[i] << '"' << (i >= 2 ? "}" : ", ");
    cout << endl;

    cout << "charptr2: '" << **charptr2 << '\'' << endl;
    cout << "ptrconst: " << *ptrconst << endl;
    cout << "constptr: " << *constptr << endl;
    return 0;
}