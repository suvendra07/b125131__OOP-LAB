#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class StudentResult {
private:
    string studentName;
    int rollNumber;
    double marks[5]; 
    double totalMarks;
    double percentage;
    char grade;

public:
    void acceptDetails() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "\nEnter marks for 5 subjects (out of 100):" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 500.0) * 100.0;
        if (percentage >= 90.0) {
            grade = 'A';
        } 
        else if (percentage >= 80.0) {
            grade = 'B';
        } 
        else if (percentage >= 70.0) {
            grade = 'C';
        } 
        else if (percentage >= 60.0) {
            grade = 'D';
        } 
        else {
            grade = 'F';
        }
    }
    void displayResult() const {
        cout << "\n===================================" << endl;
        cout << "         STUDENT MARKSHEET         " << endl;
        cout << "===================================" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Roll Number  : " << rollNumber << endl;
        cout << "-----------------------------------" << endl;
        
        cout << "Marks Obtained in 5 Subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "  Subject " << (i + 1) << " : " << marks[i] << " / 100" << endl;
        }

        cout << fixed << setprecision(2);
        cout << "-----------------------------------" << endl;
        cout << "Total Marks  : " << totalMarks << " / 500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
        cout << "Final Grade  : " << grade << endl;
        cout << "===================================" << endl;
    }
};
int main() {
    StudentResult student;
    cout << "--- Enter Student Information ---" << endl;
    student.acceptDetails();
    student.calculateResult();
    student.displayResult();

    return 0;
}