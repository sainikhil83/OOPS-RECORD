#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    
    Box() {
        length = breadth = height = 0;
        cout << "Default constructor called." << endl;
    }

   
    Box(double l) {
        length = l;
        breadth = height = 1;
        cout << "Single parameter constructor called." << endl;
    }

    
    Box(double l, double b) {
        length = l;
        breadth = b;
        height = 1;
        cout << "Two parameter constructor called." << endl;
    }

    
    Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Three parameter constructor called." << endl;
    }

    void display() {
        cout << "Box dimensions: "
             << "Length = " << length
             << ", Breadth = " << breadth
             << ", Height = " << height << endl;
    }
};

int main() {
    Box box1;               
    Box box2(5.0);          
    Box box3(4.0, 3.0);    
    Box box4(2.0, 4.0, 6.0);
    cout << endl;

    box1.display();
    box2.display();
    box3.display();
    box4.display();

    return 0;
}
