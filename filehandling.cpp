#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << endl;
        outFile << "This is a test file." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        cout << "File content:" << endl;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }
    return 0;
}
