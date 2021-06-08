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
    int search(vector<int>&inorder,int value,int start,int end){
        int i;
        for( i=start;i<=end;i++){
            if(inorder[i]==value)break;
        }
        return i;
      
    }
    TreeNode *build(vector<int> &preorder,vector<int>&inorder,int start,int end,int &preIterator){
        if(start>end)return NULL;
        TreeNode *root = new TreeNode(preorder[preIterator++]);
        if(start==end)return root;
     
        int i=search(inorder,root->val,start,end);
        root->left=build(preorder,inorder,start,i-1,preIterator);
        root->right=build(preorder,inorder,i+1,end,preIterator);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int preIterator=0;
     return build(preorder,inorder,0,preorder.size()-1,preIterator);
    }
};