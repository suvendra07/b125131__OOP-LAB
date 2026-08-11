#include<iostream>
using namespace std;

int main(){
    int *p=new int;
    cout<<"Enter an integer: ";
    cin>>*p;
    cout<<"You entered: "<<*p<<endl;

    delete p;
    p=nullptr;
    return 0;
}