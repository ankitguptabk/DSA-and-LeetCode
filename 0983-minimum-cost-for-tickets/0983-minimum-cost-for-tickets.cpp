class Solution {
public:
    int mincostTickets(vector<int>& d, vector<int>& c) {
        int n=d.size();
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int j=i;
            while(j<n && d[j]<d[i]+7){
                j++;
            }
            int k=i;
            while(k<n && d[k]<d[i]+30){
                k++;
            }
            int one=c[0]+dp[i+1];
            int seven=c[1]+dp[j];
            int thirty=c[2]+dp[k];
            dp[i]=min({one,seven,thirty});
        }
        return dp[0];
    }
};