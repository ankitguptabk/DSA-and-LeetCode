class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long ans=s;
        n=n/2;
        ans=s+m+1LL*(n-1)*1LL*(m-1);
        return ans;
    }
};