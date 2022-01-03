#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    while(l<=r){
        int m = l +(r-1)/2;
        if(arr[m]==x)
        return m;

        if (arr[m]<x)
        l = m+1;

        else
        r= m-1;
    }

    return -1;
}

int main(){
    int n,x;
    cout<<"\nEnter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the element you want to search: ";
    cin>>x;
    sort(arr,arr+n);
    int result = binarySearch(arr,0,n-1,x);
    if(result==-1){
        cout<<"Element is not present in the array.\n";
    }
    else{
        cout<<"Element is present in the array.\n";
    }
}
