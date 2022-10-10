// Jacob Ogden
#include <iostream>
using namespace std;

bool is_prime(int n) {
    int x;
    bool prime = true;

    // Check for zero and ones.
    if (n == 0 || n == 1) {
        prime = false;
    }

    // Then we start looping from 2 until x exceeds half of n.
    for (x = 2; x <= n / 2; ++x) {
        // Check if the modulus of n and x equals zero, break if true.
        if (n % x == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}


int main() {
    // Loop 100 times, feeding x into is_prime and outputting the result to console.
    for (int x = 0; x <= 100; x++) {
        if (is_prime(x)) {
            cout << x << " is prime." << endl;
        }
        else {
            cout << x << " is not prime." << endl;
        }
    }


    return 0;
}