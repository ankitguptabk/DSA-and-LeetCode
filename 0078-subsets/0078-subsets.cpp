class Solution {
public:
    vector<vector<int>> subsets(vector<int>& n) {
        vector<vector<int>>ans={{}};
        for(int a:n){
            int s=ans.size();
            for(int i=0;i<s;i++){
                vector<int>subset=ans[i];
                subset.push_back(a);
                ans.push_back(subset);
            }
        }
        return ans;
    }
};