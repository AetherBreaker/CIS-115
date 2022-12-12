//thread2.cpp - a simple thread example...
//2 threads are created and call function foo.

#include <iostream>
#include<thread>


using namespace std;

void foo(int x) {
    for (; x < 100; x = x + 2) {
        cout << x << ", ";
    }
    cout << endl << endl;
}



int main(int argc, char *argv[]) {
    thread t1(foo, 2);
    thread t2(foo, 1);
    t1.join();
    t2.join();
    foo(1);

    return 0;
}
