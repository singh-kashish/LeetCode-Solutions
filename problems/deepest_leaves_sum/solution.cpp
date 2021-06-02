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
    int maxDepth(TreeNode *root){
        if(!root)return 0;
        return max(1+maxDepth(root->left),1+maxDepth(root->right));
    }
    int su=0;
    void sum(TreeNode *root,int dist,int depth){
        if(!root)return;
        if(dist==depth)su+=root->val;
        sum(root->left,dist+1,depth);
        sum(root->right,dist+1,depth);
    }
    int deepestLeavesSum(TreeNode* root) {
        int depth=maxDepth(root);
        sum(root,1,depth);
        return su;
    }
};