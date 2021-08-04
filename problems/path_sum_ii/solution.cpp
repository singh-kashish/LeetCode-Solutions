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
    void solve(TreeNode *root,int targetSum,int currSum,vector<vector<int>>&res,vector<int>&store){
        if(!root)return;
        if(currSum+root->val==targetSum and root->left==NULL and root->right==NULL){
            store.push_back(root->val);
            res.push_back(store);
            if(root->left)solve(root->left,targetSum,currSum+root->val,res,store);
            if(root->right)solve(root->right,targetSum,currSum+root->val,res,store);
            store.pop_back();
        }
        else{
            store.push_back(root->val);
            if(root->left)solve(root->left,targetSum,currSum+root->val,res,store);
            if(root->right)solve(root->right,targetSum,currSum+root->val,res,store);
            store.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return {};
        vector<vector<int>>res;
        vector<int>store;
        solve(root,targetSum,0,res,store);
        return res;
    }
};