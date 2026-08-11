#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int numSubjects;
    float* marks; // Dynamic array pointer inside class

public:
    Student() : marks(nullptr), numSubjects(0) {}

    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter total subjects: ";
        cin >> numSubjects;

        marks = new float[numSubjects];

        cout << "Enter marks for " << numSubjects << " subjects: ";
        for (int i = 0; i < numSubjects; i++) {
            cin >> marks[i];
        }
    }

    void calculateAndDisplay() {
        float total = 0;
        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }
        float avg = (numSubjects > 0) ? (total / numSubjects) : 0.0f;

        cout << "\n--- Student Summary ---" << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Name     : " << name << endl;
        cout << "Total    : " << total << endl;
        cout << "Average  : " << avg << endl;
    }

    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student s;
    s.acceptDetails();
    s.calculateAndDisplay();

    return 0; 
}