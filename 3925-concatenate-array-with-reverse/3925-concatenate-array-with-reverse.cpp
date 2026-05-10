class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans(2*nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[i+nums.size()]=nums[nums.size()-1-i];
        }
        return ans;
    }
};