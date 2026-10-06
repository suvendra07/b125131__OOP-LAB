#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {
        name = "";
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;

public:
    Student(string n, int a, int r, double c) : Person(n, a) {
        rollNo = r;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int empId, double sal) : Person(n, a) {
        employeeID = empId;
        salary = sal;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, double c, int empId, double sal)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, empId, sal) {}

    void displayAll() {
        cout << "--- Teaching Assistant Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int age, rollNo, empId;
    double cgpa, salary;

    cout << "Enter TA Name and Age: ";
    cin >> name >> age;
    cout << "Enter Roll No and CGPA: ";
    cin >> rollNo >> cgpa;
    cout << "Enter Employee ID and Salary: ";
    cin >> empId >> salary;

    TeachingAssistant ta(name, age, rollNo, cgpa, empId, salary);
    ta.displayAll();

    return 0;
}