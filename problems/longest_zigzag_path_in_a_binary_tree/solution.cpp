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
    void solve(TreeNode *root,int dir,int curr,int &maxi){
        if(root==NULL)return;
        
        maxi=max(curr,maxi);
        if(dir==1){
            solve(root->right,1,1,maxi);    
            if(root->left)solve(root->left,0,curr+1,maxi);
            else return;
        }
        else if(dir==0){
            solve(root->left,0,1,maxi);
            if(root->right)solve(root->right,1,curr+1,maxi);
            else return;
        }
        
    }
    int longestZigZag(TreeNode* root) {
        int maxi=0;
        solve(root,1,0,maxi);
        solve(root,0,0,maxi);
        return maxi;
    }
};