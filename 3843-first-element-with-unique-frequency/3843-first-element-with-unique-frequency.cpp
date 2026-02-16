class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m, f;
        for(int x:nums) m[x]++;
        for(auto const &p:m){
            f[p.second]++;
        }
        for(int i=0;i<n;i++){
            if(f[m[nums[i]]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};