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
    void getleaf(TreeNode* root,vector<int>&vec){
        if(root ==nullptr) return;
        if(root->left==nullptr && root->right==nullptr) {
            vec.push_back(root->val);
            return;
        }
        getleaf(root->left,vec);
        getleaf(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        getleaf(root1,a);
        getleaf(root2,b);
        return a==b;
    }
};