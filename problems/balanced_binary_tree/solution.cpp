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
    int isBalance(TreeNode *root){
        if(!root)return 0;
        int left = isBalance(root->left);
        if(left==-1)return -1;
        int right = isBalance(root->right);
        if(right == -1)return -1;
        if(abs(left-right)>1)return -1;
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int x = isBalance(root);
        if(x==-1)return false;
        else return true;
    }
};