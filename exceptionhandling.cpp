#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }
        cout << "Result: " << dividend / divisor << endl;
    } catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
