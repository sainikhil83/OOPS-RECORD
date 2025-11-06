#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double b) {
        cout << "Double: " << b << endl;
    }

    void show(string c) {
        cout << "String: " << c << endl;
    }
};

int main() {
    Print p;

    p.show(10);         
    p.show(3.14);        
    p.show("Hello");    

    return 0;
}
