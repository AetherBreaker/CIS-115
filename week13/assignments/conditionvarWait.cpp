// Jacob Ogden

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <Windows.h>
#include <psapi.h>

// Ensure that the PSAPI library is linked.
#pragma comment(lib, "psapi.lib")

// Declare a class named Profiler.
class Profiler {
    private:
    HANDLE m_process;
    SIZE_T m_memoryUsage;
    // Define a private member variable to store the start time.
    const std::chrono::time_point<std::chrono::high_resolution_clock> start_;

    public:
    Profiler(): start_(std::chrono::high_resolution_clock::now()) {
        // Get the current process.
        m_process = GetCurrentProcess();

        // Get the initial amount of memory used by the process.
        UpdateMemoryUsage();
    }

    ~Profiler() {
        const auto end = std::chrono::high_resolution_clock::now();
        const auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start_);

        std::cout << "Elapsed time: " << elapsed_time.count() << "ms" << std::endl;

        // Print the memory usage when the object goes out of scope.
        PrintMemoryUsage();
    }

    // Update the amount of memory used by the process.
    void UpdateMemoryUsage() {
        PROCESS_MEMORY_COUNTERS_EX pmc;
        if (GetProcessMemoryInfo(m_process, reinterpret_cast<PPROCESS_MEMORY_COUNTERS>(&pmc), sizeof(pmc))) {
            m_memoryUsage = pmc.PrivateUsage;
        }
    }

    // Print the amount of memory used by the process.
    void PrintMemoryUsage() {
        std::cout << "Memory usage: " << m_memoryUsage << " bytes" << std::endl;
    }
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
    {
        Profiler profiler;
        // Create two threads: one that waits for the flag to be set to true,
        // and one that sets the flag to true after a one-second delay
        std::thread t1(wait_for_flag);
        std::thread t2(set_flag);

        // Wait for both threads to finish
        t1.join();
        t2.join();
    }

    return 0;
}
