#include <iostream>
using namespace std;

void minmaxLinear(int arr[], int n,int min, int max){ 
    for(int i=1;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    cout<<"Minimum element is "<<min<<" and Maximum element is "<<max;
}

int main(){
    int min,max,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    minmaxLinear(arr,n,arr[0],arr[0]);
    return 0;
}
