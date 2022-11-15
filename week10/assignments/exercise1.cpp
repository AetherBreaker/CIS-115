#include <iostream>
#include <list>
#include <format>

using std::list;
using std::format;

list<int *> intList;
// list<int *>::iterator intListIter;

int *p1 = new int(1);
int *p2 = new int(2);
int *p3 = new int(3);
int *p4 = new int(4);
int *p5 = new int(5);


void addToList(int *);
void printList();
void deleteFromList(int *);
void deletepointer(int *);


int main() {

    addToList(p1);
    addToList(p2);
    addToList(p3);
    addToList(p4);
    addToList(p5);

    printList();

    deleteFromList(p3);
    deleteFromList(p5);

    printList();

    deletepointer(p1);
    deletepointer(p2);
    deletepointer(p4);

    return 0;
}

void addToList(int *p) {
    intList.push_back(p);
}

void printList() {
    for (list<int *>::iterator intListIter = intList.begin(); intListIter != intList.end(); intListIter++) {
        std::cout << "Iterator:\t" << intListIter << "\nPointer:\t" << *intListIter << "\nValue:\t" << **intListIter << std::endl;
    }
}

void deleteFromList(int *p) {
    for (list<int *>::iterator intListIter = intList.begin(); intListIter != intList.end(); intListIter++) {
        if (*intListIter == p) {
            intList.erase(intListIter);
            delete p;
            break;
        }
    }
}

void deletepointer(int *p) {
    delete p;
}
