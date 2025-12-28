class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int ans=0;
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    if(i>0){
                        dp[i][j]=1+dp[i-1][j];
                    }
                    else dp[i][j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int minHeight = dp[i][j];
                for (int k = j; k >= 0 && minHeight > 0; k--) {
                    minHeight = min(minHeight, dp[i][k]);
                    ans += minHeight;
                }
            }
        }
        return ans;
    }
};