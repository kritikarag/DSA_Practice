#include <iostream>
using namespace std;
void printArray(int* arr, int n,int el)
{
    int i,flag,pos;
    for (i = 0; i < n; i++) 
    {
        if(arr[i]==el)
        pos=i;
        flag=0;
        
    }
    
    cout<<"\n";
    if(flag==0)
    cout<<"Element found at position "<<pos+1;
    else
    cout<<"Element have not been found";
}

int main()
{
    int n, arr[n], value;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<("Enter the element you wanna search: ");
    cin>>value;
 
    printArray(arr, n, value);
 
    return 0;
}
