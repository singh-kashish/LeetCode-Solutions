class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // Using dfs and state to maintain track
        vector<vector<int>>adj(numCourses);
        for(const auto &p:prerequisites){
            int toTakeCourse = p[0];
            int prereqCourse = p[1];
            adj[prereqCourse].push_back(toTakeCourse);
        }
        // state[i]==0(Not Taken/Processed yet), 1 -> Processing/Taking Course, 2->Processed/Taken Course Already/Before
        vector<int>state(numCourses,0);
        vector<int>postOrder;
        postOrder.reserve(numCourses);
        for(int u=0;u<numCourses;u++){
            if(state[u]==0){
                if(!dfs(u,adj,state,postOrder))return {};//Detected Cycle-Not possible to finish
            }
        }
        reverse(postOrder.begin(),postOrder.end());
        return postOrder;
    }
    bool dfs(int u, vector<vector<int>>&adj,vector<int>&state, vector<int>&result){
        if(state[u]==1)return false; // Found backedge,cycle(Already in recursion stack)
        if(state[u]==2)return true; // Already processed node
        state[u]=1; // Marked as processing
        for(int v : adj[u]){
            if(!dfs(v,adj,state,result)){
                // Already in stack, cycle detected -> Bubble up false->Impossible to do
                return false;
            }
        }
        state[u]=2;
        result.push_back(u);
        return true;    
    }
};