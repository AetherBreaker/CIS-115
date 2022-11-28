#include <iostream>
#include <string>
#include <exception>

using std::cout;
using std::cin;


// global var to track how many layers deep without adding an additional argument to recur_until
unsigned int tracked_depth = 0;

// decided to make my own custom exception for this just as an excuse to learn how to do it
class IntentionalError : public std::exception {
    public:
    char const *what() {
        return "Working as intended";
    }
};

// recursive function that throws an exception at the specified depth
void recur_until(unsigned int *depth) {
    if (*depth > 0) {
        cout << "Current depth is: " << tracked_depth << ".\n";
        tracked_depth++;
        *depth -= 1;
        recur_until(depth);
    }
    else {
        cout << "Current depth is: " << tracked_depth << ".\n";
        cout << "Throwing exception.\n";
        throw IntentionalError();
    }
}


int main() {

    cout << "Enter the depth of the recursive function: ";

    // we only want a positive number, so we use a temporary variable to store the input
    int *input = new int;
    cin >> *input;

    // convert to positive number
    unsigned int depth = abs(*input); // unsigned int because it will never be negative
    delete input; // clean up our temporary variable
    cout << "Beginning recursion with a target depth of " << depth << ".\n";

    try {
        recur_until(&depth);
    }
    catch (IntentionalError exception) {
        cout << "Exception: " << exception.what() << ".\n";
    }

    return 0;
}

