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
    void isvalid(TreeNode *root){
        if(root){
        isvalid(root->left);
        v.push_back(root->val);
        isvalid(root->right);
}
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        isvalid(root);
        for(int i=1;i<v.size();i++){
            if(v[i-1]>=v[i])return false;
        }
        return true;
    }
    };