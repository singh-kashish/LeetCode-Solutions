class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>s,q;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    s.insert(i);
                    q.insert(j);
                 
            }
        }}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s.find(i)!=s.end() or q.find(j)!=q.end()){
                    matrix[i][j]=0;
            }
        }}    
    }
};