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
class FindElements {
public:
    TreeNode* root;
    FindElements(TreeNode* r) {
        root = r;
        restore(root, 0);
    }

    void restore(TreeNode* node, int val) {
        if (!node) return;
        node->val = val;
        restore(node->left, 2 * val + 1);
        restore(node->right, 2 * val + 2);
    }

    bool find(int target) {
        return dfs(root, target);
    }

    bool dfs(TreeNode* node, int target) {
        if (!node) return false;
        if (node->val == target) return true;
        return dfs(node->left, target) || dfs(node->right, target);
    }
};
/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */