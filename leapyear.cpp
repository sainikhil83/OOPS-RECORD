#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string department;
    double salary;

public:
    // Constructor
    Employee(int idVal = 0, const string &nameVal = "", const string &deptVal = "", double salVal = 0.0)
      : id(idVal), name(nameVal), department(deptVal), salary(salVal)
    { }


    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Salary: ";
        cin >> salary;
    }


    void display() const {
        cout << "\nEmployee Details\n";
        cout << "ID         : " << id       << "\n";
        cout << "Name       : " << name     << "\n";
        cout << "Department : " << department << "\n";
        cout << "Salary     : " << salary   << "\n";
    }
};

int main() {
    Employee emp;
    emp.input();
    emp.display();

    return 0;
}
