class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]<=k){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};