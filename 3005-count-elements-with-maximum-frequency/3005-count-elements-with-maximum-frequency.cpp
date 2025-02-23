class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0,m1=0;
        for(auto &pair:m){
            m1=max(m1,pair.second);
        }
        for(auto &pair:m){
            if(pair.second==m1){
                ans += pair.second;
            }
        }
        return ans;
    }
};