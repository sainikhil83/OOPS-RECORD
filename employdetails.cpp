#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
    string name;
    int id;
    double basicSalary;
    double hra;     
    double da;       
    double tax;     
    double grossSalary;
    double netSalary;

public:
    void inputDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();  
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = basicSalary * 10;  
        da = basicSalary * 70;   
        tax = basicSalary * 20;  
        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - tax;
    }

    void printPayslip() {
        cout << fixed << setprecision(2);
        cout << "\n-------- Employee Payslip --------\n";
        cout << "Employee ID   : " << id << "\n";
        cout << "Employee Name : " << name << "\n";
        cout << "Basic Salary  : $" << basicSalary << "\n";
        cout << "HRA (10%)     : $" << hra << "\n";
        cout << "DA (70%)      : $" << da << "\n";
        cout << "Gross Salary  : $" << grossSalary << "\n";
        cout << "Tax Deduction : $" << tax << "\n";
        cout << "Net Salary    : $" << netSalary << "\n";
        cout << "----------------------------------\n";
    }
};

int main() {
    Employee emp;
    emp.inputDetails();
    emp.calculateSalary();
    emp.printPayslip();

    return 0;
}
