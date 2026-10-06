#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult() {
        cout << "Calculating result for student..." << endl;
    }
};

class RegularStudent : public Student {
private:
    float marks1, marks2;

public:
    RegularStudent(string n, int r, float m1, float m2) : Student(n, r) {
        marks1 = m1;
        marks2 = m2;
    }

    void calculateResult() override {
        float total = marks1 + marks2;
        cout << "--- Regular Student Result ---" << endl;
        cout << "Name: " << name << "  Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
private:
    float marks1, marks2;

public:
    ScholarshipStudent(string n, int r, float m1, float m2) : Student(n, r) {
        marks1 = m1;
        marks2 = m2;
    }

    void calculateResult() override {
        float total = marks1 + marks2 + 5;
        cout << "--- Scholarship Student Result ---" << endl;
        cout << "Name: " << name << "  Roll No: " << rollNo << endl;
        cout << "Total Marks (with 5 bonus marks): " << total << endl;
    }
};

int main() {
    string name1, name2;
    int roll1, roll2;
    float m1_1, m1_2, m2_1, m2_2;

    cout << "Enter Regular Student Name: ";
    cin >> name1;
    cout << "Enter Roll No: ";
    cin >> roll1;
    cout << "Enter Marks 1 and Marks 2: ";
    cin >> m1_1 >> m1_2;

    cout << "Enter Scholarship Student Name: ";
    cin >> name2;
    cout << "Enter Roll No: ";
    cin >> roll2;
    cout << "Enter Marks 1 and Marks 2: ";
    cin >> m2_1 >> m2_2;

    RegularStudent reg(name1, roll1, m1_1, m1_2);
    ScholarshipStudent sch(name2, roll2, m2_1, m2_2);

    reg.calculateResult();
    sch.calculateResult();

    return 0;
}