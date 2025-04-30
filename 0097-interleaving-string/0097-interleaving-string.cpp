class Solution {
public:
    bool isInterleave(string a, string b, string c) {
        int n = a.size(),m =b.size(),o=c.size();
        if(n+m!=o) return false;

        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
        dp[0][0] = true;

        for(int i = 0; i <= n; ++i){
            for(int j = 0; j <= m; ++j){
                if(i > 0 && a[i - 1] == c[i + j - 1])
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                if(j > 0 && b[j - 1] == c[i + j - 1])
                    dp[i][j] = dp[i][j] || dp[i][j - 1];
            }
        }

        return dp[n][m];
    }
};
