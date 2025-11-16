class Solution {
public:
    int numSub(string s) {
        long long ans=0, c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') c++;
            else{
                ans+=(c*(c+1))/2;
                c=0;
            }
        }
        ans+=(c*(c+1))/2;
        long long mod=1e9+7;
        return ans%mod;
    }
};