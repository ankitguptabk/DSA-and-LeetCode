class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int ans=max(nums[0], nums[n-1]);
        return ans;
    }
};
