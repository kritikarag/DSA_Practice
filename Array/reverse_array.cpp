#include<iostream>
using namespace std;
//Iterative Approach
void ReverseArrayIteration(int arr[], int start, int end){
    int temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
        start++;
    }
}
//Recursive Approach
void ReverseArrayRecursion(int arr[],int start, int end){
    int temp;
    if(start>=end)
    return;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    ReverseArrayRecursion(arr,start+1,end+1);
}

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    ReverseArrayIteration(arr,0,n-1);
    cout<<"Reversed Array: ";
    PrintArray(arr,n);
    
    ReverseArrayRecursion(arr,0,n-1);
    cout<<"Reversed Array: ";
    PrintArray(arr,n);
}
