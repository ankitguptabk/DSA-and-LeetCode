class Solution {
public:
    int climbStairs(int n, vector<int>& c) {
        long long ans = 0;
        vector<long long>dp(n+1,1e9);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            if(i-1>=0) dp[i]=min(dp[i],dp[i-1]+c[i-1]+1);
            if(i-2>=0) dp[i]=min(dp[i],dp[i-2]+c[i-1]+4);
            if(i-3>=0) dp[i]=min(dp[i],dp[i-3]+c[i-1]+9);
        }
        return dp[n];
    }
};
