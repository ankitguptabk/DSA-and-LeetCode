class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(k>=m && k>=n) return 0;
        long long ans=0;
        if(m>k) ans+=((long long)k*(long long)(m-k));
        if(n>k) ans+=((long long)k*(long long)(n-k));
        return ans;
    }
};