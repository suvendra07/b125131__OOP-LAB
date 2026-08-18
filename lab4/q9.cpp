#include <iostream>
#include <string>
using namespace std;

class Exam {
private:
    string studentName;
    string subject;
    double marks;
    double maxMarks;
public:
    Exam(string name, string sub, double m, double maxM)  : studentName(name), subject(sub), marks(m), maxMarks(maxM) {}

    friend class Result;
};
class Result {
public:
    void displayResult(const Exam& e) {
        double percentage = (e.marks / e.maxMarks) * 100.0;
        cout << "Student Name: " << e.studentName << "\nSubject: " << e.subject 
             << "\nMarks: " << e.marks << "/" << e.maxMarks 
             << "\nPercentage: " << percentage << "%" << endl;
        if (percentage >= 40.0)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    Exam e1("Subu", "Mathematics", 89, 100);
    Result r;
    r.displayResult(e1);
    return 0;
}