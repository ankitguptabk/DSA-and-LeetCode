class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& a, int k) {
        int n=a.size();
        vector<int>dp(n+1,0);
        for(int i=0;i<n;i++){
            int currmax=0,currsum=0;
            for(int j=i;j>=max(0,i-k+1);j--){
                currmax=max(currmax,a[j]);
                int cursum_new=currmax*(i-j+1)+dp[j];
                currsum=max(currsum,cursum_new);
            }
            dp[i+1]=currsum;
        }
        return dp[n];
    }
};