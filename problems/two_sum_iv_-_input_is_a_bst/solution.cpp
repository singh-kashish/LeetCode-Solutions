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
    vector<int>v;
    void inorder(TreeNode *root){
        if(root){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int low=0,high=v.size()-1;
        if(low==high and v[low]!=k)return false;
        if(high==1){
            if(v[low]+v[high]!=k)return false;
        }
        while(low<high){
            if(v[low]+v[high]==k)return true;
            else if(v[low]+v[high]>k)high--;
            else low++;
        }
        return false;
    }
};