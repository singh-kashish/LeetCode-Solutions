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
    int kthSmallest(TreeNode* root, int k) {
        int result = -1;
        inorder(root,k,result);
        return result;
    }
    bool inorder(TreeNode *node,int &k, int &result){
            if(node==nullptr)return false;
            if(inorder(node->left,k,result))return true;
            k--;
            if(k==0){
                result = node->val;
                return true;    
            }
            return inorder(node->right,k,result);
    }
};