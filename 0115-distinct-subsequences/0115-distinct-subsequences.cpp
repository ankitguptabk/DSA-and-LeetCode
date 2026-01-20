class Solution {
public:
    int numDistinct(string s, string t) {
        int ans=0;
        int n=s.size(), m=t.size();
        vector<vector<double>> dp(n+1, vector<double>(m+1, 0.0));
        for(int i=0;i<=n;i++){
            dp[i][m]=1;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s[i]!=t[j]){
                    dp[i][j]=dp[i+1][j];
                }
                else{
                    dp[i][j]=dp[i+1][j]+dp[i+1][j+1]; // s[i+1]==t[j] , s[i+1]==t[j+1] 
                }
            }
        }
        return (int)(dp[0][0]);
    }
};