class Solution {
public:
    int maximumEnergy(vector<int>& e, int k) {
        int ans=INT_MIN;
        int n=e.size();
        vector<int>dp(n,0);
        for(int i=n-1;i>=0;i--){
           dp[i]=e[i];
           if(i+k<n){
            dp[i]+=dp[i+k];
           }
           ans=max(ans,dp[i]);
        }
        return ans;
    }
};