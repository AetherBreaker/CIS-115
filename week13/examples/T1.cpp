// T1.cpp    Thread Example 1
// This starts a new thread, the thread function prints Hello!.
// However the output is unreliable and behavior is unpredictable.   Why?

#include <thread>
#include <iostream>

void my_thread_function() {
    std::cout << "Hello!" << std::endl;
}

int main() {
    std::cout << "thread starting!" << std::endl;

    std::thread t(my_thread_function);

    std::cout << "thread ended!" << std::endl;

    t.join();				//“wait for the thread to terminate.”
    return 0;
}