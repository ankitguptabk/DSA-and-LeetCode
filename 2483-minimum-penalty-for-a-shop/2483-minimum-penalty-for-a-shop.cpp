class Solution {
public:
    int bestClosingTime(string c) {
        vector<int>dp(c.size()+1,0);
        for(int i=c.size()-1;i>=0;i--){
            if(c[i]=='Y'){
                dp[i]=dp[i+1]+1;
            }
            else dp[i]=dp[i+1];
        }
        int pref_no=0;
        int mini=INT_MAX, ans=0;
        for(int i=0;i<=c.size();i++){
            int penalty=pref_no+dp[i];
            if(penalty<mini  || (penalty==mini && i<ans)){
                mini=penalty;
                ans=i;
            }
            if(i<c.size() && c[i]=='N') pref_no++;
        }
        return ans;
    }
};