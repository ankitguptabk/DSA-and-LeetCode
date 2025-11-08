class Solution {
public:
    bool isprime(int a){
        if(a==1) return false;
        for(int j=2;j*j<=a;j++){
            if(a%j==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& n) {
        long long x=0,y=0;
        for(long long  i=0;i<n.size();i++){
            if(isprime(n[i])){
                x=i;
                break;
            }
        }
        for(long long  i=n.size()-1;i>=0;i--){
            if(isprime(n[i])){
                y=i;
                break;
            }
        }
        return y-x;
    }
};