#include <iostream>
using namespace std;

class Student {
public:
    // Data members
    int rollno;
    string name;

    // Constructor (automatically called when object is created)
    Student() {
        cout << "Constructor called!" << endl;
        rollno = 0;
        name = "Unknown";
    }

    // Member function to set data
    void setData(int r, string n) {
        rollno = r;
        name = n;
    }

    // Member function to display data
    void displayData() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor (automatically called when object is destroyed)
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating student1..." << endl;
    Student student1; // Constructor is called

    student1.setData(1, "Alice");
    student1.displayData();

    {
        cout << "\nCreating student2 in a block..." << endl;
        Student student2;
        student2.setData(2, "Bob");
        student2.displayData();
        // Destructor for student2 will be called here when it goes out of scope
    }

    cout << "\nBack in main, ending program..." << endl;
    // Destructor for student1 will be called when main ends
    return 0;
}
