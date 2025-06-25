class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                a.push_back(i);
            }
        }
        unordered_set<int>s;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(a[i]-j)<=k) s.insert(j);
            }
        }
        vector<int>ans(s.begin(),s.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
};