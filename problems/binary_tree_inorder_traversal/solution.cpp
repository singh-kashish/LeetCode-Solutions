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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root){
            vector<int>pre=inorderTraversal(root->left);
            pre.push_back(root->val);
            vector<int> post=inorderTraversal(root->right);
            pre.insert(pre.end(),post.begin(),post.end());
            return pre;
        }
        else{
            return {};
        }
        
    }
};