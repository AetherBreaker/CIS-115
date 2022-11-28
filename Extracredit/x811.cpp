// Read a sequence of words from input. Use Quit as a word that terminates the
// input. Print the words in the order they were entered. Don’t print a word twice.
// Modify the program to sort the words before printing them. Name your
// program “x811.cpp”

// Jacob Ogden

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool stringComparator(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] < b[i]) {
            return true;
        }
        else if (a[i] > b[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    std::vector<string> words;
    string word;

    cout << "Enter a word: ";
    cin >> word;

    while (word != "Quit") {
        words.push_back(word);
        cout << "Enter a word: ";
        cin >> word;
    }

    cout << endl << "Words in order entered:" << endl;
    for (string word : words) {
        cout << word << endl;
    }

    // Sort the words
    std::sort(words.begin(), words.end(), stringComparator);

    cout << endl << "Sorted:" << endl;
    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}