class Solution {
public:
    int minOperations(string s, int k) {
        int o=0,z=0;
        for(char c:s){
            if((c-'0')%2==0) z++;
        }
        int n=s.size();
        if(z==0) return 0;
        if(z%k==0) return z/k;
        if(k==n && z==n) return 1;
        for(int m=1;m<=n;m++){
            long long sum=1LL*m*k;
            if(sum<z) continue;
            if((sum-z)%2==1) continue;
            long long extrpair=(sum-z)/2;
            long long cap=1LL*z*((m-1)/2)+1LL*(n-z)*((m/2));
            if(cap>=extrpair) return m;
        }
        return -1;
    }
};