class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                c++;
            }
            if(c+1==nums.size()/2){
                ans= nums[i];
                break;
            }
        }
        return ans;
    }
};