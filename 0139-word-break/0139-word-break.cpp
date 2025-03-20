class Solution {
public:
    bool wordBreak(string s, vector<string>& w) {
        vector<bool>dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++){
            for(auto x:w){
                int a=i-x.size();
                if(a>=0 && dp[a] && s.substr(a,x.size())==x){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};