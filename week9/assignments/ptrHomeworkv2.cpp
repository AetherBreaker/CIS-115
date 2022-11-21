// ptrHomework.cpp   
// Instructions below...

#include <iostream>

using namespace std;

const int MAX = 5;

double *loadArray(double *ar, int limit);				// load up the array with #'s starting w/ an entered #.
void dispArray(double *ar, double *n);				// show but don't change
void reValue(double r, double *ar, double *n);			// multiply each n elements by r and update


int main() {

    double properties[MAX];
    double *size = loadArray(properties, MAX);
    dispArray(properties, size);

    cout << "Enter the revaluation factor: ";
    double factor;
    cin >> factor;

    reValue(factor, properties, size);
    dispArray(properties, size);

    cout << "Done!" << endl;

    return 0;

}

double *loadArray(double *ar, int limit) {

    cout << "Enter the starting number: ";
    double start;
    cin >> start;

    for (int i = 0; i < limit; i++) {
        ar[i] = start + i;
    }

    return &(ar[limit - 1]);
}

void dispArray(double *ar, double *n) {
    for (int i = 0; &(ar[i]) != n; i++) {
        cout << ar[i] << ' ';
    }
    cout << endl;
}

void reValue(double r, double *ar, double *n) {

    for (int i = 0; &(ar[i]) != n; i++) {
        ar[i] *= r;
    }
}

// Step #1.    		Write the function definitions for the above prototypes and 
//				get the program to compile and run successfully.

// Step #2.		Write a second version of this program so that the three
//				array handling functions each use two pointer parameters
//				to represent a range.   The fil_array function, instead of 
//				returning the number of items read, should return a pointer
//				to the location after the last location is filled.  The other 
//				two functions can use this pointer as a second argument to 
//				identify the end of the data.   

//				Document your code!  
//				Get version 2 to compile and run succesfully.

//				Submit both versions of your source code to  Brightspace.  Label each with the 
//				appropriate version # in your file name.
//				Include your name in the code.  
//				Due in my inbox by Monday, 2/21 @ 6 pm.