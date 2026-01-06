class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int hcf=nums[0];
        for(int i=1;i<nums.size();i++){
            hcf=__gcd(hcf,nums[i]);
        }
        return hcf==1;
    }
};