// T2.cpp    Thread Example 2 (using joins)
// You have to wait for threads to finish!
// We have to ensure that the thread has finished. 
// We do that by joining with the thread by calling 
// the join() member function of our thread object.

#include <thread>
#include <iostream>

using namespace std;

void my_thread_func() {
    cout << "Hello!" << endl;
}

int main() {
    thread t(my_thread_func);
    t.join();									// join() == "Wait for the thread to terminate."

    cout << "At the end of main() " << endl;

    return 0;
}
