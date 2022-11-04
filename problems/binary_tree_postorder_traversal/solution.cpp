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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            vector<int>ans=postorderTraversal(root->left);
            vector<int>right=postorderTraversal(root->right);
            ans.insert(ans.end(),right.begin(),right.end());
            ans.push_back(root->val);
            return ans;
        }
        else return {};
    }
};