#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the prices of stocks for all days: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value,max=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            value = arr[j]-arr[i];
            if(value>max)max = value;
        }
    }
    cout<<"Maximum possible profit is: "<<max;
}
