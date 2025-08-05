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
    bool isSymmetric(TreeNode* root) {
        if(!root)return false;
       // return isMirror(root->left,root->right);
       // Using Iteration we can do this using a stack or queue but adds space complexity -> Queue based Solution below:
    //    queue<TreeNode*>q;
    //    q.push(root->left);
    //    q.push(root->right);
    //    while(!q.empty()){
    //     auto l = q.front();q.pop();
    //     auto r = q.front();q.pop();
    //     if(!l && !r)continue;
    //     if(!l || !r)return false;
    //     if(l->val!=r->val)return false;
    //     if(l->val==r->val){
    //         q.push(l->left);
    //         q.push(r->right);
    //         q.push(l->right);
    //         q.push(r->left);
    //     }
    //    }
    //    return true;
    // }

    //Stack solution below: -
    stack<pair<TreeNode*,TreeNode*>>st;
    st.emplace(root->left,root->right);
    while(!st.empty()){
        auto [l,r] = st.top();st.pop();
        if(!l && !r)continue;
        if(!l || !r || l->val != r->val)return false;
        st.emplace(l->left,r->right);
        st.emplace(l->right,r->left);
    }
    return true;

    //Recursive Solution Below
    // bool isMirror(TreeNode *left, TreeNode *right){
    //     if(!left && !right)return true;
    //     if(!left || !right)return false;
    //     if(left->val!=right->val)return false;
    //     return isMirror(left->left,right->right) && isMirror(right->left,left->right);
}};