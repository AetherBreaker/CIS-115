#include <iostream>
#include <list>
#include <memory>

using std::cout;
using std::endl;
using std::list;
using std::unique_ptr;


int main() {
    // using unique_ptr, Write a List of pointers that deletes the objects pointed to when it itself is destroyed
    // (and must be removed from the list)
    // or if the element is removed from the List .

    list<unique_ptr<int>> l;
    l.push_back(unique_ptr<int>(new int(1)));
    l.push_back(unique_ptr<int>(new int(2)));
    l.push_back(unique_ptr<int>(new int(3)));
    l.push_back(unique_ptr<int>(new int(4)));
    l.push_back(unique_ptr<int>(new int(5)));

    for (auto i : l) {
        cout << *i << endl;
    }



}