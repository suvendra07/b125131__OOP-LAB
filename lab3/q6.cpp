#include<iostream>
using namespace std;    

class Employee{
    private:
        int empId;
        string empName;
        float empSalary;
    public:
        void takeDetails(){
            cout<<"Enter employee ID: ";
            cin>>empId;
            cout<<"Enter employee name: ";
            cin.ignore();
            getline(cin, empName);
            cout<<"Enter employee salary: ";
            cin>>empSalary;
            cout<<"------------------------------"<<endl;
        }
        
        void displayDetails(){
            cout<<"Employee ID: "<<empId<<endl;
            cout<<"Employee Name: "<<empName<<endl;
            cout<<"Employee Salary: "<<empSalary<<endl;
        }
};
 int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;

    Employee *empArr=new Employee[n];
    
    for(int i=0; i<n; i++){
        cout<<"Enter details for employee "<<i+1<<":"<<endl;
        empArr[i].takeDetails();
    }
    for(int i=0; i<n; i++){
        cout<<"Details of employee "<<i+1<<":"<<endl;
        empArr[i].displayDetails();
    }

    delete[] empArr;
    empArr=nullptr;
    return 0;
 }