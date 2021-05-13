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
    vector<int>inord;
    void inorder(TreeNode *root){
        if(root){
        inorder(root->left);
        inord.push_back(root->val);
        inorder(root->right);
        }
    }
    void change(TreeNode *root){
        auto index=find(inord.begin(),inord.end(),root->val)-inord.begin();
        int sum=0;
        for(int i=index;i<inord.size();i++)sum+=inord[i];
        root->val=sum;
    }
    void makeChange(TreeNode *root){
        if(root){
        change(root);
        makeChange(root->left);
        makeChange(root->right);
    }}
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        makeChange(root);
        return root;
    }
};