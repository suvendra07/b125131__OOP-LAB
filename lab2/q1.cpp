#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    Student() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\n----------------------------" << endl;
        cout << "     STUDENT DETAILS        " << endl;
        cout << "----------------------------" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
        cout << "----------------------------" << endl;
    }
};
int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}