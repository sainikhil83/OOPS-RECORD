#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    int area() {
        return length * width;
    }

    // Friend function to display area - takes Rectangle object as argument
    friend void displayArea(Rectangle rect);
};

// Function that takes Rectangle object as argument
void displayArea(Rectangle rect) {
    cout << "Area of Rectangle: " << rect.area() << endl;
}

int main() {
    Rectangle r1(10, 5);

    // Passing object r1 as argument to function
    displayArea(r1);

    return 0;
}
