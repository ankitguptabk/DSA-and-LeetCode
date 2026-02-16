class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;  ){
            int col=colors[i];
            long long prev1=0, prev2=0;
            while(i<n && colors[i]==col){
                long long take=prev2+nums[i];
                long long skip=prev1;
                long long curr=max(take, skip);
                prev2=prev1;
                prev1=curr;
                i++;
            }
            ans+=prev1;
        }
        return ans;
    }
};