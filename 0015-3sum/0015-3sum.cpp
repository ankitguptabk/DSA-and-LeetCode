class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return {};
        vector<vector<int>> a;
        sort(nums.begin(),nums.end());
        for(int i=0;i+2<n;i++){
            if(i>0&& nums[i]==nums[i-1]) continue;

            int l=i+1;
            int r=n-1;
            while(l<r){
                const int s=nums[i]+nums[l]+nums[r];
                if(s==0){
                    a.push_back({nums[i],nums[l++],nums[r--]});
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(l<r && nums[r]==nums[r+1]) r--;
                }
                else if(s<0) l++;
                else r--;
            }
        }
        return a;
    }
};