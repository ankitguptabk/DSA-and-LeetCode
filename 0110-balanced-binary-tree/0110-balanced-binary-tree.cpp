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
private:
    int getHeight(TreeNode* node) {
        if (node == nullptr) {
            return -1;
        }
        return 1 + max(getHeight(node->left), getHeight(node->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return abs(getHeight(root->left) - getHeight(root->right)) < 2 &&
               isBalanced(root->left) && isBalanced(root->right);
    }
};
