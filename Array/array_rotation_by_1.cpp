#include<iostream>
using namespace std;

void leftRotateByOne(int arr[],int n){
    int temp = arr[0],i;
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void rightRotateByOne(int arr[],int n){
    int temp = arr[n-1],i;
    for(i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotateByOne(arr,n);
    cout<<"\nAfter left rotation by 1: ";
    printArray(arr,n);

    rightRotateByOne(arr,n);
    cout<<"\nAfter right rotation by 1: ";
    printArray(arr,n);

    return 0;
}
