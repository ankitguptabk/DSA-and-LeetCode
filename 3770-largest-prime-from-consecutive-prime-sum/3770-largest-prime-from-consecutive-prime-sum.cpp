class Solution {
public:
    bool prime(long long x){
        if(x==0 || x==1) return false;
        else if(x%2==0) return x==2;
        for(long long i=3;i*i<=x;i+=2){
            if(x%i==0) return false;
        }
        return true;
    }
    int largestPrime(int n) {
        vector<int>p;
        long long sum=0;
        int ans=0;
        for(int i=2;i<500000;i++){
            if(prime(i)){
                sum+=i;
                if(sum>n) break;
                if(prime(sum)) ans=(int)sum;
            }
        }
        return ans;
    }
};