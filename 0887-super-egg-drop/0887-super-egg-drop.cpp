class Solution {
public:
    int superEggDrop(int k, int n) {
        vector<long long>dp(k+1,0);
        int ans=0;
        while(dp[k]<n){
            ans++;
            for(int i=k;i>0;i--){
                dp[i]=dp[i]+dp[i-1]+1;
            }
        }
        return ans;
    }
};