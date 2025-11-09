#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setData(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(2.5, 3.5);
    c2.setData(1.5, 4.5);

    c3 = c1.add(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
