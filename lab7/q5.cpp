#include <iostream>
using namespace std;

class Academic {
protected:
    double mark1;
    double mark2;
    double mark3;

public:
    Academic(double m1, double m2, double m3) {
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }
};

class Sports {
protected:
    double sportsMarks;

public:
    Sports(double sm) {
        sportsMarks = sm;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(double m1, double m2, double m3, double sm) 
        : Academic(m1, m2, m3), Sports(sm) {}

    void displayResult() {
        double academicTotal = mark1 + mark2 + mark3;
        double total = academicTotal + sportsMarks;
        double average = total / 4.0;

        cout << "--- Student Final Result ---" << endl;
        cout << "Academic Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    double m1, m2, m3, sm;

    cout << "Enter 3 Academic Marks: ";
    cin >> m1 >> m2 >> m3;
    cout << "Enter Sports Marks: ";
    cin >> sm;

    StudentResult sr(m1, m2, m3, sm);
    sr.displayResult();

    return 0;
}