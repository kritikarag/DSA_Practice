int solve(string s)
{
    //code here
    map<char,long long ,greater<long long>>st;
    for(long long i=0;i<s.size();i++){
        st[s[i]]++;
    }
    long long maxi=0,res=0;
    for(auto i:st){
        if(i.second>maxi){
            maxi=i.second;
           // if(i.first>res)
            res= i.first-'0';
        }
    }
    return (res);
    
}
