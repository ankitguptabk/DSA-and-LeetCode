class Solution {
public:
    bool prime(long long x){
        if(x==0 || x==1) return false;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& n) {
        long long a=0,b=0;
        for(long long i=0;i<n.size();i++){
            if(!prime(i)){
                b+=n[i];
            }
            else a+=n[i];
        }
        return abs(a-b);
    }
};