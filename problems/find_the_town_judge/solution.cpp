class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // Indegree / OutDegrees
        // Find a node in the graph with indegree equal to n-1
        vector<int>degree(n,0);
        for(auto x:trust){
            degree[x[0]-1]--;
            degree[x[1]-1]++;
        }
        for( int i=0 ; i < n ; i++ ){
            if(degree[i]==n-1)return i+1;
        }
        return -1;
    }
};