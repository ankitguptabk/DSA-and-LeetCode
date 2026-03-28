class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        int x=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
                if((nums[i]==1 && nums[j]==2) || (nums[i]==2 && nums[j]==1)){
                    x=min(x, abs(i-j));
                }
            }
        }
        if(x==INT_MAX) return -1;
        return x;
    }
};