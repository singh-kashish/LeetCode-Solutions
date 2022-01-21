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
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode *>q;
        int depth = 0;
        q.push(root);
        while(q.empty()==false){
            depth++;
            int n = q.size();
            for(int i=0;i<n;i++){
                auto curr = q.front();
                q.pop();
                if(curr->left==NULL and curr->right == NULL)return depth;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return 1;
    }
};