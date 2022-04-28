vector<long long> find(vector<long long> a,vector<long long> b,vector<long long> q) {
   vector<long long>res;
   for(long long i=0;i<q.size();i++){
       long long val = a[q[i]];
       long long count=0;
       for(long long j=0;j<b.size();j++){
           if(b[j]<=val)count++;
       }
     res.push_back(count);  
   }
   return res;
}
