class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        vector<int>dp(n.size(),1);
        for(int i=1;i<n.size();i++){
            for(int j=0;j<i;j++){
                if(n[i]>n[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=*max_element(dp.begin(),dp.end());
        return ans;
    }
};