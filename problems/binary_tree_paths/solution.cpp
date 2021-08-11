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
    vector<string>res;
    string n="->";
    void solve(TreeNode *root,string str){
        if( !root->left and root->right==NULL){
            str+=to_string(root->val);
            res.push_back(str);
            return;
        }
        str+=to_string(root->val);
        if(root->left)solve(root->left,str+n);
        if(root->right)solve(root->right,str+n);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)return {};
        solve(root,"");
        return res;
    }
};