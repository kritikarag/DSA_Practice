#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        set<int>s;
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            s.insert(x);
        }
        int val = s.size();
        if(val>=c)cout<<"0"<<endl;
        else cout<<(c-val)<<endl;
    }
    
	// your code goes here
	return 0;
}
