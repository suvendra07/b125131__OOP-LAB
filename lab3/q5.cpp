#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        int rollNumber;
        string name;
        float marks;
    public:
        void takeDetails(){
            cout<<"Enter roll number: ";
            cin>>rollNumber;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter marks: ";
            cin>>marks;
            cout<<"------------------------------"<<endl;
        }
        
        void displayDetails(){
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
  int main(){
    Student *s=new Student;
    s->takeDetails();
    s->displayDetails();

    delete s;
    s=nullptr;
    return 0;
  }

