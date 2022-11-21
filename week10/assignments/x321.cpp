#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

template <typename T>
void displayVector(vector<T> &v) {
    for (auto i : v) {
        cout << i << endl;
    }
}


template <typename T>
void displayVectorReverse(vector<T> &v) {
    for (auto i = v.rbegin(); i != v.rend(); i++) {
        cout << *i << endl;
    }
}

int main() {
    vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    displayVector(v);
    displayVectorReverse(v);
    return 0;
}