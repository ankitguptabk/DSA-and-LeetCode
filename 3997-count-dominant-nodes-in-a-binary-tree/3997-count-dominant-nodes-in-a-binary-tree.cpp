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
    int dfs(TreeNode* root){
        if(root == NULL){
            return INT_MIN;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        int maxi = max(root->val, max(left,right));

        if(maxi==root->val){
            ans++;
        }
        return maxi;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return ans;
    }
};