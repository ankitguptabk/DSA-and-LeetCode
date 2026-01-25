class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]) ans=i+1;
        }
        return ans;
    }
};