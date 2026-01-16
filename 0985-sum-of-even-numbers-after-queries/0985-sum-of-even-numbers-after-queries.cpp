class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int m=nums.size(), n=queries.size();
        int sum=0;
        for(int x:nums){
            if(x%2==0) sum+=x;
        }
        for(int i=0;i<n;i++){
            int s=sum;
            int idx=queries[i][1];
            int val=queries[i][0];

            if(nums[idx]%2==0){
                s-=nums[idx];
            }
            int x=nums[idx];
            nums[idx]+=val;
            if(nums[idx]%2==0){
                s+=nums[idx];
            }
            ans.push_back(s);
            sum=s;
        }
        return ans;
    }
};