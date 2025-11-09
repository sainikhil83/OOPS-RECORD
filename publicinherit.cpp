#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
class StudentPublic : public Person {
public:
    int rollNo;
    void setRoll(int r) {
        rollNo = r;
    }
    void displayStudent() {
        display();
        cout << "Roll No: " << rollNo << endl;
    }
};
class StudentPrivate : private Person {
public:
    int rollNo;
    void setDataPrivate(string n, int a, int r) {
        name = n;
        age = a;
        rollNo = r;
    }
    void displayStudentPrivate() {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollNo << endl;
    }
};
int main() {
    StudentPublic sp;
    sp.setData("thulasi", 20);
    sp.setRoll(101);
    sp.displayStudent();
    StudentPrivate spriv;
    spriv.setDataPrivate("prasath", 22, 102);
    spriv.displayStudentPrivate();
    return 0;
}
