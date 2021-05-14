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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)return new TreeNode(val);
        TreeNode *parent=NULL,*curr=root;
        while(curr){
            parent=curr;
            if(curr->val>val)curr=curr->left;
            else if(curr->val<val)curr=curr->right;
        }
        TreeNode *nn=new TreeNode(val);
        if(parent->val>val)parent->left=nn;
        else parent->right=nn;
        return root;
    }
};