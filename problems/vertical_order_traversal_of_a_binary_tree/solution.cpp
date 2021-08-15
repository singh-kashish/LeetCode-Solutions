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
    bool static myCmp(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first)return a.first<b.first;
    else{
        return a.second<=b.second;
    }
    
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL)return {};
        map<int,vector<pair<int,int>>>keys;
        queue<pair<int,TreeNode*>>q;
        q.push({0,root});
        int level=1;
        while(q.empty()==false){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto curr = q.front();
                q.pop();
                if(keys.find(curr.first)==keys.end())keys[curr.first]=vector<pair<int,int>>(1,{level,curr.second->val});
                else keys[curr.first].push_back({level,curr.second->val});
                  if(curr.second->right)q.push(make_pair(curr.first+1,curr.second->right));
                if(curr.second->left)q.push({curr.first-1,curr.second->left});
            }
            level++;
        }
        vector<vector<int>>ans;
        for(auto itr:keys){
            vector<int>temp;
            sort(itr.second.begin(),itr.second.end(),myCmp);
            for(auto x:itr.second){
                temp.push_back(x.second);
            }
           
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};