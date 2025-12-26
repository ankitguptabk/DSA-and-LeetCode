class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>ans;
        int maxi= (1<<maximumBit)-1;
        int n= nums.size();
        int element=0;
        for(int i=0;i<n;i++){
            element^=nums[i];
            ans.push_back(element^maxi);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};