class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==1) return false;
        int a=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a+=i;
                if(i!=n/i) a+=n/i;
            }
        }
        return a==n;
    }
};