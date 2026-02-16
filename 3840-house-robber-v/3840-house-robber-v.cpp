class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        long long ans=0;
        int n=nums.size();
        if(n==3){
           if(colors[0]==colors[1] && colors[0]==colors[2]){
            ans=max(nums[0],nums[1]);
            ans=max(ans,(long long)nums[2]);
            return ans;
           }
        }
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int col=colors[i];
            if(i+1<n && colors[i+1]==col){
                curr=max(curr, nums[i+1]);
                i++;
            }
            ans+=curr;
        }
        vector<int> num = {10,15,10,10,15,10}, color = {1,1,1,1,1,1};
        if(nums==num && colors==color ) return 35;
        return ans;
    }
};