#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    double basicSalary;
    double hra;
    double da;
    double grossSalary;
public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore(); //means it takes the whole string name without buffering in input. 
        
        cout << "Enter Employee Name: ";
        getline(cin, empName);  
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        hra = 0.20 * basicSalary;             
        da = 0.10 * basicSalary;              
        grossSalary = basicSalary + hra + da; 
    }

    void displayDetails() {
        cout << "\n===================================" << endl;
        cout << "         EMPLOYEE SALARY DETAILS   " << endl;
        cout << "===================================" << endl;
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        
        cout << fixed << setprecision(2);
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
        cout << "===================================" << endl;
    }
};
int main() {
    Employee emp;
    emp.acceptDetails();
    emp.calculateSalary();
    emp.displayDetails();

    return 0;
}