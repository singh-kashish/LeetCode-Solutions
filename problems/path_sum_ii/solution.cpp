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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>currPath;
        dfs(res,currPath,root,0,targetSum);
        return res;
    }
    void dfs(vector<vector<int>>&res, vector<int>arr, TreeNode* node, int currSum, int targetSum){
        if(!node)return;
        currSum+=node->val;
        arr.push_back(node->val);
        if(!node->left && !node->right && currSum == targetSum){
            res.push_back(arr);
        }
        dfs(res,arr, node->left, currSum,targetSum);
        dfs(res,arr, node->right, currSum,targetSum);
        return;
    }
};