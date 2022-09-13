class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>toBeSetToZeroI,toBeSetToZeroJ;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    toBeSetToZeroI.insert(i);toBeSetToZeroJ.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(toBeSetToZeroI.find(i)!=toBeSetToZeroI.end() or toBeSetToZeroJ.find(j)!=toBeSetToZeroJ.end())matrix[i][j]=0;
            }
        }
    }
};