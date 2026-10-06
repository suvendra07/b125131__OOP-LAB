#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float bs) {
        name = n;
        basicSalary = bs;
    }
};

class Developer : public Employee {
protected:
    int experience;

public:
    Developer(string n, float bs, int exp) : Employee(n, bs) {
        experience = exp;
    }
};

class SeniorDeveloper : public Developer {
private:
    float projectBonus;

public:
    SeniorDeveloper(string n, float bs, int exp, float pb) : Developer(n, bs, exp) {
        projectBonus = pb;
    }

    void calculateAndDisplaySalary() {
        float expBonus = 0.05 * basicSalary * experience;
        float finalSalary = basicSalary + expBonus + projectBonus;

        cout << "--- Senior Developer Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Experience Bonus: " << expBonus << endl;
        cout << "Project Bonus: " << projectBonus << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main() {
    string name;
    float basicSalary, projectBonus;
    int experience;

    cout << "Enter Developer Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Experience (in years): ";
    cin >> experience;
    cout << "Enter Project Bonus: ";
    cin >> projectBonus;

    SeniorDeveloper sd(name, basicSalary, experience, projectBonus);
    sd.calculateAndDisplaySalary();

    return 0;
}