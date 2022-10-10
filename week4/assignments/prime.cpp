#include <iostream>
using namespace std;

bool is_prime(int n) {
    int x;
    bool prime = true;

    if (n == 0 || n == 1) {
        prime = false;
    }

    for (x = 2; x <= n / 2; ++x) {
        if (n % x == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}


int main() {
    for (
        int x = 0;
        x >= 100;
        x++
        ) {
        cout << x << " " << is_prime(x) << endl;
        if (is_prime(x)) {
            cout << x << " is prime." << endl;
        }
        else {
            cout << x << " is not prime." << endl;
        }
    }


    return 0;
}