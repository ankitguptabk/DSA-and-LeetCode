class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int m=nums.size(), n=queries.size();
        for(int i=0;i<n;i++){
            nums[queries[i][1]]+=queries[i][0];
            int s=0;
            for(int j=0;j<m;j++){
                if(nums[j]%2==0){
                    s+=nums[j];
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};