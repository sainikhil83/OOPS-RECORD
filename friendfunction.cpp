#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    
    friend void showWidth(Box b);
};

void showWidth(Box b) {

    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box1(10);
    showWidth(box1);
    return 0;
}
