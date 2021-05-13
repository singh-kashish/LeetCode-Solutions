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
    TreeNode* successor(TreeNode *curr){
        curr=curr->right;
        while(curr and curr->left){
            curr=curr->left;
        }
        return curr;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return root;
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else if(root->val<key)root->right=deleteNode(root->right,key);
        else{
            if(root->left==NULL){
                TreeNode *temp=root->right;
                delete (root);
                return temp;
            }
            else if(root->right==NULL){
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            else{
                //find smallest successor , next to it in inorder traversal
                TreeNode *succ=successor(root);
                root->val=succ->val;
                root->right=deleteNode(root->right,succ->val);
            }
        }
        return root;
    }
};