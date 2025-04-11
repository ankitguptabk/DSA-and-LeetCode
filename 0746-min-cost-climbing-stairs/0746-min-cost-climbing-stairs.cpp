class Solution {
public:
    int minCostClimbingStairs(vector<int>& c) {
        if(c.size()==0) return 0;
        if(c.size()==1) return c[0];
        vector<int>dp(c.size());
        dp[0]=c[0],dp[1]=c[1];
        for(int i=2;i<c.size();i++){
            dp[i]=c[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[c.size()-2],dp[c.size()-1]);
    }
};