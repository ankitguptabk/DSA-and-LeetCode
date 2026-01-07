class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            long long g=(long long)nums[i];
            if(nums[i]==k) ans++;
            for(int j=i+1;j<nums.size();j++){
                g=gcd(g,(long long)nums[j]);
                if(g==k) ans++;
            }
        }
        return ans;
    }
};