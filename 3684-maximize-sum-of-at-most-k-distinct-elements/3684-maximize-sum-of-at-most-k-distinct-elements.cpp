class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        vector<int>n(s.begin(),s.end());
        if(k>n.size()) k=n.size();
        vector<int>ans(n.end()-k,n.end());
        reverse(ans.begin(),ans.end());
        return ans;
    }
};