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
    int ans=0;
    pair<int,int>dfs(TreeNode* root){
        if(root==NULL) return pair<int,int>(0,0);
        pair<int,int> left=dfs(root->left);
        pair<int,int>right=dfs(root->right);
        int tot=left.first+right.first+root->val;
        int c=left.second+right.second+1;
        if(root->val==tot/c) ans++;
        return pair<int,int>(tot,c);
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};