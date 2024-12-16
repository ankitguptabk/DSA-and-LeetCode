class Solution {
public:
    vector<vector<int>> permute(vector<int>& n) {
        vector<vector<int>>ans;
        vector<int>c={};
        backtrack(c,ans,n);
        return ans;
    }
    void backtrack(vector<int>&c, vector<vector<int>>&ans,vector<int>&n){
        if(c.size()==n.size()){
            ans.push_back(c);
            return;
        }
        for(int num:n){
            if(find(c.begin(),c.end(),num)==c.end()){
                c.push_back(num);
                backtrack(c,ans,n);
                c.pop_back();
            }
        }
    }
};