class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int ans=0;
        vector<vector<int>>dp(m.size(),vector<int>(m[0].size(),0));
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    dp[i][j]=0;
                }
                else if(m[i][j]==1){
                    if(i>0 && j>0) dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    else dp[i][j]=1;
                }
                ans+=dp[i][j];
            }
        }
        return ans;
    }
};