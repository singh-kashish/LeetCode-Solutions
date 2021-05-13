/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * }
 */
class Solution {
public:
    vector<int>inord;
    void inorder(TreeNode *root){
        if(root){
            inorder(root->left);
            inord.push_back(root->val);
            inorder(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int res=INT_MAX;
        for(int i=1;i<inord.size();i++){
            res=min(res,abs(inord[i]-inord[i-1]));
        }
        return res;
    }
};