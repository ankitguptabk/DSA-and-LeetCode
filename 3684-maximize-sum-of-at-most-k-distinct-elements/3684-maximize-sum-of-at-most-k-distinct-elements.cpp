class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>n(s.begin(),s.end());
        sort(n.begin(),n.end(),greater<int>());
        if(k>n.size()) k=n.size();
        vector<int>ans(n.begin(),n.begin()+k);
        return ans;
    }
};