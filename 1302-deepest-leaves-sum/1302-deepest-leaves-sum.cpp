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
    void getleaf(TreeNode* root,vector<pair<int,int>>&vec,int lev, int &maxdepth){
        if(root==nullptr) return ;
        maxdepth=max(maxdepth, lev);
        if(root->left==nullptr && root->right==nullptr){
            vec.push_back({root->val,lev });
        }
        getleaf(root->left,vec,lev+1,maxdepth);
        getleaf(root->right,vec,lev+1,maxdepth);
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<pair<int,int>>vec;
        int deeplevel=0;
        getleaf(root,vec,0,deeplevel);
        int ans=0;
        for(auto const &p:vec){
            if(p.second==deeplevel){
                ans+=p.first;
            }
        }
        return ans;
    }
};