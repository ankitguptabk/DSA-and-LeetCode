class Solution {
public:
    vector<vector<int>> dp;
    int f(int l, int r) {
        if (l >= r) return 0;
        if (dp[l][r]!=-1){
            return dp[l][r];
        }
        int ans = INT_MAX;

        for (int x=l;x<=r;x++) {
            int cost = x + max(f(l,x-1),f(x+1,r));
            ans = min(ans, cost);
        }
        return dp[l][r]=ans;
    }
    int getMoneyAmount(int n) {
        dp = vector<vector<int>>(n + 1,vector<int>(n+1,-1));
        return f(1, n);
    }
};