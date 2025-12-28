class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long ans=LLONG_MIN;
        int n=nums.size();
        vector<long long>pref(n+1,0);
        vector<long long>suff(n);
        long long mini=LLONG_MAX;

        for(int i=0;i<n;i++){
            pref[i+1]=nums[i]+pref[i];
            mini=min(mini, (long long) nums[n-1-i]);
            suff[n-1-i]=mini;
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,(pref[i+1]-suff[i+1]));
        }
        return ans;
    }
};