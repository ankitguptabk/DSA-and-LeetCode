class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size(),n=o[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        if(o[0][0]==1) return 0;
        dp[0][0]=1;
        for(int r=1;r<m;r++){
            if(o[r][0]==0){
                dp[r][0]=dp[r-1][0];// 1st col
            }
        }
        for(int c=1;c<n;c++){
            if(o[0][c]==0){
                dp[0][c]=dp[0][c-1];// first row;;;;
            }
        }
        for(int r=1;r<m;r++){
            for(int c=1;c<n;c++){
                if(o[r][c]==0){
                    dp[r][c]=dp[r-1][c]+dp[r][c-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};