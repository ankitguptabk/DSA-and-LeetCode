class Solution {
public:
    bool prime(int x){
        if(x==1) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int l, int r) {
        int ans=0;
        for(int a=l;a<=r;a++){
            int b=bitset<32>(a).count();
            if(prime(b)) ans++;
        }
        return ans;
    }
};