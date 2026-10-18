class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ans=0, n=nums.size();
        for(int i=0;i<n-1;i++){
            if((nums[i] ^ nums[i+1]) ==0){
                ans++;
            }
        }
        return ans;
    }
};