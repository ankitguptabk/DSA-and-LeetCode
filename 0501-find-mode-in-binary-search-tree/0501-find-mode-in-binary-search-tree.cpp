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
    void dfs(TreeNode* root, vector<int>&x){
        if(root==NULL) return ;
        dfs(root->left,x);
        x.push_back(root->val);
        dfs(root->right,x);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>x;
        dfs(root,x);
        unordered_map<int,int>m;
        int y=0;
        for(auto i:x){
            m[i]++;
            y=max(y,m[i]);
        }
        vector<int>ans;
        for(auto const &p:m){
            if(p.second==y) ans.push_back(p.first);
        }
        return ans;
    }
};