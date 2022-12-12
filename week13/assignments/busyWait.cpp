// Jacob Ogden

#include <iostream>
#include <thread>
#include <chrono>

// Declare a class named Profiler.
class Profiler {
    public:
    // Define the constructor of Profiler.
    // When an object of Profiler is created, the current time is recorded.
    Profiler(): start_(std::chrono::high_resolution_clock::now()) {}

    // Define the destructor of Profiler.
    // When an object of Profiler is destroyed, the elapsed time is calculated
    // and printed to the standard output.
    ~Profiler() {
        const auto end = std::chrono::high_resolution_clock::now();
        const auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start_);

        std::cout << "Elapsed time: " << elapsed_time.count() << "ms" << std::endl;
    }

    private:
    // Define a private member variable to store the start time.
    const std::chrono::time_point<std::chrono::high_resolution_clock> start_;
};

// Declare a global variable named flag.
bool flag = false;

// Declare a function named wait_for_flag that waits for the flag to become true.
void wait_for_flag() {
    // Busy wait until flag becomes true.
    while (!flag) {
    }

    // Print a message and reset the flag to false.
    std::cout << "Flag is now true" << std::endl;
    flag = false;
}

// Declare a function named set_flag that sets the flag to true after one second.
void set_flag() {
    // Sleep for one second.
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Set the flag to true.
    flag = true;
}

// Define the main function.
int main() {
    // Measure the time used by the CPU in this block.
    {
        // Create an object of Profiler.
        // This will record the start time.
        Profiler profiler;

        // Create two threads, one to run wait_for_flag and the other to run set_flag.
        std::thread t1(wait_for_flag);
        std::thread t2(set_flag);

        // Wait for the threads to finish.
        t1.join();
        t2.join();
    }

    // Return 0 to indicate success.
    return 0;
}
