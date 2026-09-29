#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float marks;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter total marks: ";
        cin >> marks;
    }

    bool operator>(Student s) {
        if (marks > s.marks) {
            return true;
        } else {
            return false;
        }
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:" << endl;
    s1.input();

    cout << "Enter details for Student 2:" << endl;
    s2.input();

    if (s1 > s2) {
        cout << s1.getName() << " (" << s1.getMarks() 
             << " marks) has higher marks than " << s2.getName() << "." << endl;
    } else if (s2 > s1) {
        cout << s2.getName() << " (" << s2.getMarks() 
             << " marks) has higher marks than " << s1.getName() << "." << endl;
    } else {
        cout << " Both students have equal marks." << endl;
    }

    return 0;
}