#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b)
    {
        return a + b;
    }

 
    int add(int a, int b, int c) 
    {
        return a + b + c;
    }

 
    double add(double a, double b) 
    {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 and 3: " << calc.add(2, 3) << endl;
    cout << "Sum of 1, 4 and 5: " << calc.add(1, 4, 5) << endl;
    cout << "Sum of 2.5 and 3.1: " << calc.add(2.5, 3.1) << endl;

    return 0;
}
