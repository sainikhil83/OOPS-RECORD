#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    
    Student* s1 = new Student;
    s1->setData("Alice", 20);
    s1->display();

    Student* sArr = new Student[2];
    sArr[0].setData("Bob", 22);
    sArr[1].setData("Charlie", 19);
    for (int i = 0; i < 2; i++) {
        sArr[i].display();
    }
    delete s1;
    delete[] sArr;

    return 0;
}
