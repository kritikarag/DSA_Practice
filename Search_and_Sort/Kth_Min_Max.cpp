#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void KthMax(int arr[], int k,int n){
    sort(arr,arr+n);
    cout<<arr[k-1];
}

void KthMin(int arr[], int k, int n){
    sort(arr,arr+n);
    cout<<arr[n-k];
}

int main(){
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position of Kth element: ";
    cin>>k;
    cout<<"Kth smallest element is: ";
    KthMin(arr,k,n);
    cout<<"\nKth largest element is: ";
    KthMax(arr,k,n);
}
