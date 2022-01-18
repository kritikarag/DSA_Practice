#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    stack<int>s;
    int a,b,c,d,e;
    cin>>a;
    s.push(a);
    cin>>b;
    s.push(b);
    s.pop();
    cin>>c;
    s.push(c);
    cin>>d;
    s.push(d);
    s.pop();
    cin>>e;
    s.push(e);

    cout<<"Size of the array is: "<<s.size()<<endl;

    cout<<"Elements in the stack are: ";
    while(!s.empty()){
        int val = s.top();
        cout<<val<<" ";
        s.pop();
    }

    return 0;
}
