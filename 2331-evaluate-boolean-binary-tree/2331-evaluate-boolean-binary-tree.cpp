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
    bool evaluateTree(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr) return root->val;
        bool evaluateleftsubtree=evaluateTree(root->left);
        bool evaluaterightsubtree=evaluateTree(root->right);
        bool evaluateroot;
        if(root->val==2){
            evaluateroot=evaluateleftsubtree || evaluaterightsubtree;
        }
        else if(root->val==3){
            evaluateroot=evaluateleftsubtree && evaluaterightsubtree;
        }
        return evaluateroot;
    }
};