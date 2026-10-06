#include <iostream>
using namespace std;

class InternalExam {
protected:
    double internalMarks;

public:
    InternalExam(double im) {
        internalMarks = im;
    }

    void display() {
        cout << "Internal Exam Marks: " << internalMarks << endl;
    }
};

class ExternalExam {
protected:
    double externalMarks;

public:
    ExternalExam(double em) {
        externalMarks = em;
    }

    void display() {
        cout << "External Exam Marks: " << externalMarks << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    FinalResult(double im, double em) 
        : InternalExam(im), ExternalExam(em) {}

    void showAllResults() {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    double intM, extM;

    cout << "Enter Internal Marks: ";
    cin >> intM;
    cout << "Enter External Marks: ";
    cin >> extM;

    FinalResult res(intM, extM);

    cout << "\nCalling resolved display methods inside class function:" << endl;
    res.showAllResults();

    cout << "\nCalling resolved display methods directly from main():" << endl;
    res.InternalExam::display();
    res.ExternalExam::display();

    return 0;
}