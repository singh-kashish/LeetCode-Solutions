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
    int converter(string s){
        int n = s.length();
        int result=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0')continue;
            else result+=pow(2,n-i-1);
        }
        return result;
    }
    vector<string>storage;
    void path(TreeNode *root,string str){
        if(!root)return;
        if(!root->left and !root->right){
            storage.push_back(str+to_string(root->val) );
            return;
        }
        path(root->left,str+to_string(root->val));
        path( root->right , str + to_string(root->val) );
    }
    int sumRootToLeaf(TreeNode* root) {
        path(root,"");
        int result = 0;
        for(auto x : storage){
            result+=converter(x);
        }
        return result;
    }
};