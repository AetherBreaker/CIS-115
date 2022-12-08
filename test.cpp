
// C++ program for function overriding
#include <iostream>
using namespace std;

class base {
    public:
    virtual void print() {
        cout << "print base class" <<
            endl;
    }

    void show() {
        cout << "show base class" <<
            endl;
    }
};

class derived: public base {
    public:

    // print () is already virtual function in
    // derived class, we could also declared as
    // virtual void print () explicitly
    void print() {
        cout << "print derived class" <<
            endl;
    }

    void show() {
        cout << "show derived class" <<
            endl;
    }
};

// Driver code
int main() {
    base b;
    base *basebasedpointer = &b;
    derived d;
    base *basederivedpointer = &d;
    derived *derivedderivedpointer = &d;

    cout << "print() calls:" << endl;
    cout << "b.print() = ";
    b.print();
    cout << "basebasedpointer->print() = ";
    basebasedpointer->print();

    cout << endl;

    cout << "d.print() = ";
    d.print();
    cout << "basederivedpointer->print() = ";
    basederivedpointer->print();
    cout << "derivedderivedpointer->print() = ";
    derivedderivedpointer->print();

    cout << endl;

    cout << "show() calls:" << endl;
    cout << "b.show() = ";
    b.show();
    cout << "basebasedpointer->show() = ";
    basebasedpointer->show();

    cout << endl;

    cout << "d.show() = ";
    d.show();
    cout << "basederivedpointer->show() = ";
    basederivedpointer->show();
    cout << "derivedderivedpointer->show() = ";
    derivedderivedpointer->show();

    return 0;
}