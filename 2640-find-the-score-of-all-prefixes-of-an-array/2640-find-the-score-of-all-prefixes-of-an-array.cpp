class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>pref(nums.size(),0);
        int x=nums[0];
        pref[0]=nums[0]*2;
        for(int i=1;i<nums.size();i++){
            x=max(x,nums[i]);
            pref[i]=pref[i-1]+nums[i]+x;
        }
        return pref;
    }
};