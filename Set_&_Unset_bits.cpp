#include <iostream>
using namespace std;

int main() {
    int t,i,j;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        i=0,j=0;
        while(n){
            int bit = (n&1);
            if(bit == 0){
                i++;
            }
            else j++;
            n = n>>1;
        }
        cout<<"Unset Bits: "<<i<<endl;
        cout<<"Set Bits: "<<j<<endl;
    }
	// your code goes here
	return 0;
}
