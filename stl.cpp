#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    vector<int> v = {5, 2, 9, 1, 5};
    v.push_back(7);
    cout << "Vector elements: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    map<string, int> studentMarks;
    studentMarks["Alice"] = 85;
    studentMarks["Bob"] = 92;
    studentMarks["Charlie"] = 78;
    cout << "Student marks:" << endl;
    for (auto &entry : studentMarks) {
        cout << entry.first << " : " << entry.second << endl;
    }
    return 0;
}
