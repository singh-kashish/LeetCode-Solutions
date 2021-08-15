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
    int count = 1;
    TreeNode* prev=NULL;
    int max=0;
    void traverse(TreeNode * root,vector<int>&modes){
        if(root==NULL)return;
        traverse(root->left,modes);
        
        //main logic
        if(prev!=NULL){
            if(prev->val==root->val){
                count++;
            }
            else count=1;
        }
        if(count>max){
                max=count;
                modes.clear();
                modes.push_back(root->val);
            }
        else if(count==max){
            modes.push_back(root->val);
        }
        prev=root;
        traverse(root->right,modes);
    }
    vector<int> findMode(TreeNode* root) {
        if(root==NULL)return {-1};
        vector<int>modes;
        traverse(root,modes);
        return modes;
    }
};