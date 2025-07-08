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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr) return 0;
        int s=0;
        if(root->left!=nullptr && root->left->left==nullptr && root->left->right==nullptr){
            s+=root->left->val;
        }
        s+=sumOfLeftLeaves(root->left);
        s+=sumOfLeftLeaves(root->right);
        return s;
    }
};