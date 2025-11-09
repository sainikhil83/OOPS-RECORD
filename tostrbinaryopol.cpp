#include <iostream>
using namespace std;
class MyString {
private:
    string str;
public:
    MyString() : str("") {}
    MyString(string s) : str(s) {}
    void display() {
        cout << str << endl;
    }
    MyString& operator=(const MyString &s) {
        if (this != &s) {
            str = s.str;
        }
        return *this;
    }
    bool operator==(const MyString &s) {
        return str == s.str;
    }
};
int main() {
    MyString s1("Hello");
    MyString s2;
    MyString s3("World");
    s2 = s1;
    cout << "After Assignment, s2: ";
    s2.display();
    if (s1 == s2) {
        cout << "s1 and s2 are equal" << endl;
    } else {
        cout << "s1 and s2 are not equal" << endl;
    }
    if (s1 == s3) {
        cout << "s1 and s3 are equal" << endl;
    } else {
        cout << "s1 and s3 are not equal" << endl;
    }
    return 0;
}
