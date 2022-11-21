#include <iostream>
#include <list>
#include <memory>

using std::cout;
using std::endl;
using std::list;
using std::unique_ptr;


int main() {
    // Write a List of pointers that deletes the objects pointed to when it itself is destroyed (and must be removed from the list) or if the element is removed from the List using unique_ptr.
    list<unique_ptr<int>> l;


}