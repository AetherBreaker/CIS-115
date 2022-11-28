// Write a function that counts the number of occurrences of a pair of letters in a
// string and another that does the same in a zero-terminated array of char (a Cstyle string).
// For example, the pair "ab" appears twice in "xabaacbaxabb".
// Name your program “x12.cpp”

// Jacob Ogden

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int countPairs(string str, string pair) {
    int count = 0;

    for (std::string::iterator i = str.begin(); i != str.end(); i++) {
        if (*i == pair[0] && *(i + 1) == pair[1]) {
            count++;
        }
    }
    return count;
}
int countPairs(char str[], string pair) {
    int count = 0;

    for (int i = 0; str[i] != NULL; i++) {
        if (str[i] == pair[0] && str[i + 1] == pair[1]) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "xabaacbaxabb";
    char str2[] = "xabaacbaxabb";

    cout << countPairs(str, "ab") << endl;
    cout << countPairs(str2, "ab") << endl;

    return 0;
}