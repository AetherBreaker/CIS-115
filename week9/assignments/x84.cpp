#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

// Given two char pointers pointing into a char array, find and output the number of characters between the two pointed-to characters (zero if they point to the same element). In other words,
// point each pointer to an element of the array and output the char elements between the two.
int main() {
    array<char, 10> arr = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char *ptr1 = &arr[0];
    char *ptr2 = &arr[9];
    cout << "ptr1: " << *ptr1 << " ptr2: " << *ptr2 << endl;
    cout << "ptr1: " << ptr1 << " ptr2: " << ptr2 << endl;
    cout << "ptr2 - ptr1: " << ptr2 - ptr1 << endl;

    for (
        auto it = (arr.begin() + (ptr1 - arr.data())); // little bit of math with memory addresses to get the iterator to the correct position
        it != (arr.begin() + (ptr2 - arr.data()));
        it++
    )
        cout << *it << endl;


    return 0;
}
