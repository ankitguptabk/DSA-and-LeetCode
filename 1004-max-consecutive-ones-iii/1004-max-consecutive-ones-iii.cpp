class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,zero=0;
        int ans=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) zero++;
            while(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};