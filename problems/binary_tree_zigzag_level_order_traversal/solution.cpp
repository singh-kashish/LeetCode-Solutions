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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        vector<vector<int>>res;
        while(q.empty()==false){
            int n=q.size();
            vector<int>ans;
            for(int i=0;i<n;i++){
                TreeNode *temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(level%2==1){
                res.push_back(ans);
            }
            else{
                res.push_back(vector<int>(ans.rbegin(),ans.rend()));
            }
            level++;
        }
        return res;
    }
};