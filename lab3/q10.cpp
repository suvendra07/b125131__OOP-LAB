#include <iostream>
#include <string>

class Employee {
private:
    int empID;
    std::string name;
    float basicSalary;
    int numMonths;
    float* monthlyEarnings; 

public:
    Employee() : monthlyEarnings(nullptr), numMonths(0), basicSalary(0.0) {}

    void acceptDetails() {
        std::cout << "Enter Employee ID: ";
        std::cin >> empID;
        std::cin.ignore();
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Basic Salary: ";
        std::cin >> basicSalary;
        std::cout << "Enter total evaluation months: ";
        std::cin >> numMonths;

        monthlyEarnings = new float[numMonths];

        std::cout << "Enter variable earnings for " << numMonths << " months:\n";
        for (int i = 0; i < numMonths; i++) {
            std::cout << " Month " << i + 1 << ": ";
            std::cin >> monthlyEarnings[i];
        }
    }

    void analyzeSalary() {
        if (numMonths <= 0) return;

        float totalVariable = 0.0;
        int highestMonthIndex = 0;
        float maxEarning = monthlyEarnings[0];

        for (int i = 0; i < numMonths; i++) {
            totalVariable += monthlyEarnings[i];
            if (monthlyEarnings[i] > maxEarning) {
                maxEarning = monthlyEarnings[i];
                highestMonthIndex = i;
            }
        }

        float totalEarnings = (basicSalary * numMonths) + totalVariable;
        float avgMonthly = totalEarnings / numMonths;

        std::cout << "\n=== Salary Analysis Report ===" << std::endl;
        std::cout << "Employee ID          : " << empID << std::endl;
        std::cout << "Name                 : " << name << std::endl;
        std::cout << "Total Combined Pay   : $" << totalEarnings << std::endl;
        std::cout << "Average Monthly Pay  : $" << avgMonthly << std::endl;
        std::cout << "Highest Earning Month: Month " << (highestMonthIndex + 1) 
                  << " ($" << (basicSalary + maxEarning) << ")" << std::endl;
    }

    ~Employee() {
        delete[] monthlyEarnings; 
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.analyzeSalary();

    return 0;
}