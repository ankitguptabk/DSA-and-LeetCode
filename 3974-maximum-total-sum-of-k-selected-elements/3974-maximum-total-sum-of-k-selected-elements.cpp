class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans=0;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0;i<k;i++){
            if(mul>=2){
                ans+=(long long)mul*(long long)nums[i];
                mul--;
            }
            else{
                ans+=nums[i];
            }
        }
        return ans;
    }
};