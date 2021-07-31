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
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL or (!root->left and !root->right))return -1;
        queue<TreeNode*>q;
        q.push(root);
        int res = root->left->val!=root->right->val ?max(root->left->val,root->right->val):INT_MAX-78752;
        while(q.empty()==false){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(curr->val<res and curr->val!=root->val)res=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        if(res==root->val or res==INT_MAX-78752)return -1;
        else return res;
        
    }
};