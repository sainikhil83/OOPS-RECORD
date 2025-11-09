#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};
class Employee : public Person {
public:
    int empID;
    void setEmployee(int id) {
        empID = id;
    }
};
class Manager : public Employee {
public:
    string department;
    void setManager(string dept) {
        department = dept;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Manager m;
    m.setPerson("thulasi", 555);
    m.setEmployee(100);
    m.setManager("HR");

    m.display();

    return 0;
}
