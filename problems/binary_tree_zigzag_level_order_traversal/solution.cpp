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
private:
    void reverse(vector<int>&temp){
        int l=0,r=temp.size()-1;
        while(l<=r){
            int t= temp[l];
            temp[l]=temp[r];
            temp[r]=t;
            l++;
            r--;
        }
};
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
        if(!root)return res;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            while(n){
                auto curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                n--;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right); 
            }
            if(i%2==0)res.push_back(temp);
            else {
                reverse(temp);
                res.push_back(temp);
            }
            i++;
        }
        return res;
    }
};