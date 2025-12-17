class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans=0;
        vector<int>dp(p.size(),1);
        dp[p.size()-1]=1;
        for(int i=p.size()-2;i>=0;i--){
            if(p[i]==p[i+1]+1){
                dp[i]=dp[i+1]+1;
            }
            ans+=dp[i];
        }
        ans=ans+1;//for last element
        return ans;
    }
};