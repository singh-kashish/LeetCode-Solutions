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
    vector<pair<int,int>> solve(TreeNode *root){
        if(root==NULL)return {{}};
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        vector<pair<int,int>>v;
        while(q.empty()==false){
            int n=q.size();
            for(int i=0;i<n;i++){
                pair<TreeNode*,int>curr=q.front();
                q.pop();
                v.push_back({curr.first->val,curr.second});
                if(curr.first->left)q.push({curr.first->left,2*curr.second+1});
                if(curr.first->right)q.push({curr.first->right,2*curr.second+2});
            }
        }
        return v;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q)return true;
        if(!p or !q)return false;
        vector<pair<int,int>>v1,v2;
        v1=solve(p);
        v2=solve(q);
        return v1==v2;
    }
};