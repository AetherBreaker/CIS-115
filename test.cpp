#include <Windows.h>
#include <iostream>
#include <psapi.h>
#include <chrono>

// Ensure that the PSAPI library is linked.
#pragma comment(lib, "psapi.lib")

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

int main() {
    // Create a profiler object.
    Profiler profiler;

    // Do some work here. The profiler will automatically measure the memory usage.

    // Update the memory usage manually if desired.
    profiler.UpdateMemoryUsage();

    return 0;
}
