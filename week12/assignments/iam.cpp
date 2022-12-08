// Jacob Ogden

#include <iostream>

using std::cout;
using std::endl;

class Base {
    public:
    virtual void iam() {
        cout << "Base " << endl;
    }
};

class Derived1: public Base {
    public:
    void iam() {
        cout << "Derived1 " << endl;
    }
};

class Derived2: public Base {
    public:
    void iam() {
        cout << "Derived2 " << endl;
    }
};


int main() {
    Base b;
    Derived1 d1;
    Derived2 d2;

    b.iam();
    d1.iam();
    d2.iam();

    Base *p1 = &b;
    Base *p2 = &d1;
    Base *p3 = &d2;

    p1->iam();
    p2->iam();
    p3->iam();

    return 0;
}