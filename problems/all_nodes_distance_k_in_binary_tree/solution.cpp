/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void parentFiller(TreeNode * root,unordered_map<TreeNode*,TreeNode*>&parentDict){
        if(!root)return;
        else{
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty()){
                int n = q.size();
                for(int i=0;i<n;i++){
                    TreeNode * curr = q.front();
                    q.pop();
                    if(curr->left){
                        q.push(curr->left);
                        parentDict[curr->left]=curr;
                    }
                    if(curr->right){
                        q.push(curr->right);
                        parentDict[curr->right]=curr;
                    }
                }
            }
            return;
        }
    }
    void mover(TreeNode * root,int count,unordered_set<TreeNode*>&visited,vector<int>&result,unordered_map<TreeNode*,TreeNode*>parentDict){
         
        if( !root or visited.find(root)!=visited.end() )return;
        if(count==0){
            result.push_back(root->val);
            return;
        }
        // Never come back to same root
        visited.insert(root);
        // three directions we want to move
        mover(root->left,count-1,visited,result,parentDict);
        mover(root->right,count-1,visited,result,parentDict);
        if(parentDict.find(root)!=parentDict.end() )mover(parentDict[root],count-1,visited,result,parentDict);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // step  1 : build the parent Dict so we can traverse in all directions 
        unordered_map<TreeNode*,TreeNode*>parentDict;
        parentFiller(root,parentDict);
        // step 2 : assing a visited set to make sure that we don't visit any already visited nodes
        unordered_set<TreeNode*>visited;
        vector<int>result;
        mover(target,k,visited,result,parentDict);
        return result;
    }
};