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
    bool solve(TreeNode *root){
        if(!root)return false;
        
        bool lh = pruneTree(root->left);
        bool rh = pruneTree(root->right);
        if(lh==false)root->left= NULL;
         if(rh==false)root->right=NULL;
        if(root->val==0 and !lh and !rh)return false;
        else return true;
        // return root->val==1 or lh or rh;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return solve(root) ? root : NULL;
    }
};