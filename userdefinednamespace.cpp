#include <iostream>
using namespace std;
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
}
int main() {
    int x = 10, y = 5;
    cout << "Addition: " << MathOperations::add(x, y) << endl;
    cout << "Multiplication: " << MathOperations::multiply(x, y) << endl;
    return 0;
}
