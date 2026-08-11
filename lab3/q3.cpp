#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"total number of elements : ";
    cin>>n;

    int *arr=new int[n];

    for(int i=0; i<n; i++){
        cout<<"Enter elements: ";
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest element is: "<<largest<<endl;

    delete[] arr;
    arr=nullptr;
    return 0;
}