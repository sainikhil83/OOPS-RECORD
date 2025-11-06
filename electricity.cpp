#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
    int consumerNo;
    string consumerName;
    int prevReading, currReading;
    string connectionType;
    int units;
    double bill;

public:
    void input() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Previous Month Reading: ";
        cin >> prevReading;
        cout << "Enter Current Month Reading: ";
        cin >> currReading;
        cout << "Enter Connection Type (domestic/commercial): ";
        cin >> connectionType;
    }

    void calculate() {
        units = currReading - prevReading;
        bill = 0;

        if (connectionType == "domestic") {
            if (units <= 100)
                bill = units * 1;
            else if (units <= 200)
                bill = 100 * 1 + (units - 100) * 2.5;
            else if (units <= 500)
                bill = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
            else
                bill = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        } 
        else if (connectionType == "commercial") {
            if (units <= 100)
                bill = units * 2;
            else if (units <= 200)
                bill = 100 * 2 + (units - 100) * 4.5;
            else if (units <= 500)
                bill = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
            else
                bill = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        }
    }

    void display() {
        cout << "\n--- Electricity Bill ---\n";
        cout << "Consumer No.: " << consumerNo << "\n";
        cout << "Consumer Name: " << consumerName << "\n";
        cout << "Connection Type: " << connectionType << "\n";
        cout << "Units Consumed: " << units << "\n";
        cout << "Bill Amount: Rs. " << bill << "\n";
    }
};

int main() {
    ElectricityBill eb;
    eb.input();
    eb.calculate();
    eb.display();
    return 0;
}
