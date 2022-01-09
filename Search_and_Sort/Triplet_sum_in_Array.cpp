#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool find3Numbers(int a[], int n, int x){
    sort(a,a+n);
    int ans=0;
    int l,h;
    for(int i=0;i<n;i++)
    {
        l=i+1;
        h=n-1;
           
        while(l<h)
        {
            ans=a[i]+a[l]+a[h];
               
            if(ans==x)
            {
                return true;
            }
               
            if(ans<x)
            {
                l++;
            }
            else
            {
                h--;
            }
        }
    }
    return false;
}

int main(){
    int n,x;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>x;
    cout<<find3Numbers(arr,n,x)<<endl;

    return 0;
}
