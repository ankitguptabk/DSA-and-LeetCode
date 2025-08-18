/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<pair<int,int>>&vec,int lev,int &maxdepth){
        if(root==nullptr) return;
        maxdepth=max(maxdepth,lev);
        vec.push_back({root->val,lev});
        dfs(root->left,vec,lev+1,maxdepth);
        dfs(root->right,vec,lev+1,maxdepth);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root ==NULL) return {};
        vector<pair<int,int>>vec;
        int maxdepth=0;
        dfs(root,vec,0,maxdepth);
        vector<vector<int>>ans(maxdepth+1);
        for(auto const &p:vec){
            ans[p.second].push_back(p.first);
        }
        return ans;
    }
};