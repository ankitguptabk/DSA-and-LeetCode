class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>m;
        for(int num:nums) m[num]++;
        int x=m[nums[0]];
        for(int i=0;i<n;i++){
            if(nums[i]!=nums[0] && m[nums[i]]!=x) return {nums[0], nums[i]};
        }
        return {-1,-1};
    }
};