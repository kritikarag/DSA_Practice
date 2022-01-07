#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int n = v.size();
		    if(n%2 != 0){
		        return v[(n)/2];
		    }
		    return (v[n/2]+v[(n/2)-1])/2;
		}
  
int main(){
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Median is: "<<find_median(v)<<endl;

    return 0;
}
