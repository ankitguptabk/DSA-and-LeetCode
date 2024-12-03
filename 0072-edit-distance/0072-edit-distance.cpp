class Solution {
public:
    int minDistance(string w, string s) {
        int c=0;
        while(w!=s){
            if(w.find(s)!=string::npos) return w.size()-s.size()+c;
            int n=w.size();
            int m=s.size();
            vector<vector<int>>dp(n+1,vector<int>(m+1,0));
            for(int i=0;i<=n;i++){
                for(int j=0;j<=m;j++){
                    if(i==0) {
                        dp[i][j]=j;
                    }
                    else if(j==0){
                        dp[i][j]=i;
                    }
                    else if(w[i-1]==s[j-1]){
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    }
                }
            }
            c=dp[n][m];
            break;
        }
        return c;
    }
};