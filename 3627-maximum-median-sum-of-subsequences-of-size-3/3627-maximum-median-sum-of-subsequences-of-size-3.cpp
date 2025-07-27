class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long x=nums.size()/3;
        long long ans=0,c=0;
        for(long long i=nums.size()-2;i>=0;i-=2){
            ans+=nums[i];
            c++;
            if(c==x) break;
        }
        return ans;
    }
};