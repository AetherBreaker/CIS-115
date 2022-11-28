// Write an extremely simple document editor class with only three commands:
// ‘‘Insert a string as line number n,’’ ‘‘delete line n,’’ and ‘‘undo the last (nonundo) operation.’’ Display and number the lines after each operation.
// Name your program “x155.cpp”

// Jacob Ogden

#include <iostream>
#include <string>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::list;
using std::vector;

class Document {
private:
    enum Operation { INSERT, DELETE }; // Enum for the operations

    // struct for storing contents and position of deleted lines
    struct OperationData {
        string contents;
        int position;
        Operation operation;
    };

    list<string> lines; // using a list to better facilitate the undo function
    vector<OperationData> undoStack;
public:
    // Constructor accepts the start and end iterator of any iterable of strings
    template <typename T>
    Document(T begin, T end) {
        for (T i = begin; i != end; i++) {
            lines.push_back(*i);
        }
    }

    // Inserts a line at the specified position
    void insert(string line, int position) {
        // Get iterator for start of list
        list<string>::iterator i = lines.begin();

        // Advance iterator to specified position
        for (int j = 0; j < position; j++) {
            i++;
        }

        // Insert line at position
        lines.insert(i, line);

        // Add the operation to the undo stack
        OperationData data = {line, position, INSERT};
        undoStack.push_back(data);
    }

    // Deletes a line at the specified position
    void del(int position) {
        // Get iterator for start of list
        list<string>::iterator i = lines.begin();

        // Advance iterator to specified position
        for (int j = 0; j < position; j++) {
            i++;
        }

        // Store the contents of the line to be deleted
        string line = *i;

        // Delete line at position
        lines.erase(i);

        // Add the operation to the undo stack
        OperationData data = {line, position, DELETE};
        undoStack.push_back(data);
    }
    void undo() {
        // Get the last operation from the undo stack
        switch (undoStack.back().operation) {
            case INSERT:
                // If the last operation was an insert, delete the line
                del(undoStack.back().position);

                // We dont want to store an undo of an undo, so pop the last operation
                undoStack.pop_back();
                break;
            case DELETE:
                // If the last operation was a delete, insert the line
                insert(undoStack.back().contents, undoStack.back().position);

                // We dont want to store an undo of an undo, so pop the last operation
                undoStack.pop_back();
                break;
        }

        // Remove the last non-undo operation from the undo stack
        undoStack.pop_back();
    }

    // Prints the contents of the document
    void display() {
        int i = 0;
        for (string line : lines) {
            cout << i << ": " << line << endl;
            i++;
        }
        cout << endl;
    }
};

int main() {
    vector<string> str = {"one", "two", "three", "four", "five"};
    Document doc(str.begin(), str.end());

    cout << "Initial document:" << endl;
    doc.display();

    cout << "Inserting 'six' at line 3:" << endl;
    doc.insert("six", 2);
    doc.display();

    cout << "Deleting line 4:" << endl;
    doc.del(3);
    doc.display();

    cout << "Undoing last operation:" << endl;
    doc.undo();
    doc.display();

    return 0;
}