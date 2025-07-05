class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
        int n=m.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i]=m[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int best=dp[i-1][j];
                if(j>0) best=min(best,dp[i-1][j-1]);
                if(j+1<n) best=min(best,dp[i-1][j+1]);
                dp[i][j]=m[i][j]+best;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,dp[n-1][i]);
        }
        return ans;
    }
};