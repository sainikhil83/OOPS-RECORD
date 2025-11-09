#include <iostream>
using namespace std;
template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is " << getMax(x, y) << endl;
    double p = 5.5, q = 2.3;
    cout << "Max of " << p << " and " << q << " is " << getMax(p, q) << endl;
    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is " << getMax(c1, c2) << endl;
    return 0;
}
