#include <iostream>
using namespace std;

class Number {
    int value;

public:
   
    Number(int v = 0) : value(v) {}

  
    Number operator-() {
        Number temp;
        temp.value = -value; 
        return temp;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(10);
    Number n2;

    cout << "Before overloading:" << endl;
    n1.display();
    n2 = -n1;   

    cout << "After applying unary minus:" << endl;
    n2.display();

    return 0;
}
