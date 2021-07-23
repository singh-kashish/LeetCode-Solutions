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
    int maxLevelSum(TreeNode* root) {
        if(!root)return -1;
        pair<int,int> result = {root->val,1};
        queue<TreeNode *>q;
        q.push(root);
        int level = 1;
        
        while(q.empty()==false){
            int n= q.size(),sum=0;
            for(int i=0;i<n;i++){
                TreeNode * curr= q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            if(sum>result.first)result = {sum,level};
            level++;
            }
        return result.second;
    }
};