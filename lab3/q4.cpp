#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter total floating point numbers: ";
    cin>>n;

    float *arr=new float[n];
    float sum=0.0;

    cout<<"Enter "<<n<<" floating point numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float average=sum/n;
    cout<<"The sum of floating point numbers is: "<<sum<<endl;
    cout<<"The average o floating point numbers is: "<<average<<endl;

    delete[] arr;
    arr=nullptr;
    return 0;
}