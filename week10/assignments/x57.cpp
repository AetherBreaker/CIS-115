#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void displayVector(vector<int> &v) {
    for (auto i : v) {
        cout << i << endl;
    }
}
void sortVector(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> v = {5,9,-1,200,0};
    displayVector(v);
    sortVector(v);
    displayVector(v);
    return 0;
}