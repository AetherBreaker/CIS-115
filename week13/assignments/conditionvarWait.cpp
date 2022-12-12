#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

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


// A global boolean flag
bool flag = false;

// A mutex to protect access to the flag
std::mutex mtx;

// A condition variable to signal changes to the flag
std::condition_variable cv;

// A function that waits for the flag to be set to true
void wait_for_flag() {
    // Create a unique lock on the mutex
    std::unique_lock<std::mutex> lock(mtx);

    // Wait for the flag to be set to true, checking the flag
    // every 100ms. This function will automatically unlock the
    // mutex while it is waiting, and re-lock the mutex before
    // returning.
    cv.wait_for(lock, std::chrono::milliseconds(100), [] {return flag;});

    // Print a message indicating that the flag has been set to true
    std::cout << "Flag is now " << flag << std::endl;

    // Reset the flag to false
    flag = false;
}

// A function that sets the flag to true after a one-second delay
void set_flag() {
    // Sleep for one second
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Create a lock guard to automatically lock and unlock the mutex
    std::lock_guard<std::mutex> lock(mtx);

    // Set the flag to true
    flag = true;

    // Notify one thread that is waiting for the flag to be set to true
    cv.notify_one();
}

int main() {
    // Create two threads: one that waits for the flag to be set to true,
    // and one that sets the flag to true after a one-second delay
    std::thread t1(wait_for_flag);
    std::thread t2(set_flag);

    // Wait for both threads to finish
    t1.join();
    t2.join();

    return 0;
}
