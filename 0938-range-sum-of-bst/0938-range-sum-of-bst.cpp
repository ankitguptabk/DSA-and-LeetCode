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
    int rangeSumBST(TreeNode* node, int lowerBound, int upperBound) {
        if (node == nullptr) return 0;
        int total = 0;
        if (node->val >= lowerBound && node->val <= upperBound) {
            total += node->val;
        }
        if (node->val > lowerBound) {
            total += rangeSumBST(node->left, lowerBound, upperBound);
        }
        if (node->val < upperBound) {
            total += rangeSumBST(node->right, lowerBound, upperBound);
        }
        return total;
    }
};
