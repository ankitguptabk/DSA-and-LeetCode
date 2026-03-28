class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int x=INT_MAX;
        int y=0,z=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                y=i;
            }
            if(nums[i]==2){
                z=i;
            }
            if(y!=0 && z!=0) x=min(x,abs(y-z));
        }
        if(x==INT_MAX) return -1;
        return x;
    }
};