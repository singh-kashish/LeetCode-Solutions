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
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        if(leftDepth and rightDepth)return min(leftDepth,rightDepth)+1;
        else return max(leftDepth,rightDepth)+1;
    }
};