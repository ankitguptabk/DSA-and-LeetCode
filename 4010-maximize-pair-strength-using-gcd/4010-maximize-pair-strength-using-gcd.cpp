class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int g=gcd(nums[i],nums[j]);
                ans=max(ans, (1LL*nums[i]*nums[j])/(1LL*g*g));
            }
        }
        return ans;
    }
};