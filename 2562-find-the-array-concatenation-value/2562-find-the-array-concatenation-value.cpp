class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size()/2;i++){
            long long x=stoll(to_string(nums[i])+to_string(nums[nums.size()-1-i]));
            ans+=x;
        }
        if((int)nums.size()%2==1){
            ans+=nums[nums.size()/2];
        }
        return ans;
    }
};