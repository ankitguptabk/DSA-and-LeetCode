class Solution {
public:
    bool p(int x){
        if(x==1) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    long long f(int y){
        const int mod = 1e9 + 7;
        long long result = 1;
        for (int i = 2; i <= y; i++) {
            result = (result * i) % mod;
        }
        return result;
    }
    int numPrimeArrangements(int n) {
        const int mod=1e9+7;
        int a=0;
        for(int i=1;i<=n;i++){
            if(p(i)) a++;
        }
        int b=n-a;
        long long ans=a*b;
        ans=(f(a)*f(b))%mod;
        return ans;
    }
};