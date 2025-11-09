#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() = 0; 
};
class Rectangle : public Shape {
private:
    int length, width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void area() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void area() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};
int main() {
    Rectangle r(10, 5);
    Circle c(7.5);
    r.area();
    c.area();
    return 0;
}