#include <iostream>

int x = 3;
int *ptr = &x;

int main() {
    // std::cout << "ptr = " << &**ptr << std::endl;
    std::cout << "*ptr = " << **&ptr << std::endl;
    return 0;
}