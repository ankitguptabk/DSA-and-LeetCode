class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int sum=nums[n-1], c=1;
        for(int i=n-2;i>=0;i--){
            sum+=nums[i];
            c++;
            double avg=double(sum)/double(c);
            if(nums[i]>avg) ans++;
        }
        return ans;
    }
};