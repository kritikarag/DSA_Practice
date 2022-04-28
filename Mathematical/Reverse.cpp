int reverse(int x) {
        int flag=0;
        long long res=0;
        if(x<0){
            flag=1;
            x=abs(x);
        }
        while(x>0){
            res=res*10+x%10;
            x/=10;
        }
        if(flag==1)res*=-1;
  
    //Checks the overflow condition and returns 0 if reversing the number causes an overflow
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
