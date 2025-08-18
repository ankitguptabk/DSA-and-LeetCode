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
    /* TreeNode* getleaf(TreeNode* root, int &t){
        if(root==nullptr) return nullptr;
        root->left=getleaf(root->left,t);
        root->right=getleaf(root->right,t);
        if(root->left==NULL && root->right==NULL && root->val==t){
            return nullptr;
        }
        return root;
    } */
    TreeNode* removeLeafNodes(TreeNode* root, int t) {
        if(root==nullptr) return nullptr;
        root->left=removeLeafNodes(root->left,t);
        root->right=removeLeafNodes(root->right,t);
        if(root->left==NULL && root->right==NULL && root->val==t){
            return nullptr;
        }
        return root;
    }
};