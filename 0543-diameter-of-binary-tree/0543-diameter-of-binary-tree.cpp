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
    int maxDiameter;
    int findLongestPath(TreeNode* node) {
        if (node == nullptr) return 0;

        int leftPath = findLongestPath(node->left);
        int rightPath = findLongestPath(node->right);

        maxDiameter = std::max(maxDiameter, leftPath + rightPath);

        return std::max(leftPath, rightPath) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0;
        findLongestPath(root);
        return maxDiameter;
    }
};
