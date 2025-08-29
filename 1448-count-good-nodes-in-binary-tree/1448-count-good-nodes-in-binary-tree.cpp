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
    int dfs(TreeNode* node, int maxi){
        if(node==NULL) return 0;
        int good=0;
        if(node->val>=maxi){
            good=1;
        }
        maxi=max(maxi,node->val);
        return good+dfs(node->left,maxi)+ dfs(node->right, maxi);
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};