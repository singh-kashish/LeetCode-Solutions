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
    bool checksame(TreeNode *left,TreeNode *right){
        if(left==NULL and right==NULL) return true;
        if(!left || !right)return false;
        return ((left->val == right->val) and checksame(left->left,right->right) and  checksame(left->right,right->left));
    }
    bool isSymmetric(TreeNode* root) {
        return checksame(root,root);
    }
};