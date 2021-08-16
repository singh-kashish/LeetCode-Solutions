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
    void solve(TreeNode *root,int &res){
        if(!root)return;
        if(root->left and !root->left->left and !root->left->right)res+=root->left->val;
        solve(root->left,res);
        solve(root->right,res);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int res=0;
        solve(root,res);
        return res;
    }
};