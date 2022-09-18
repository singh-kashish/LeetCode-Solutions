class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int itr=0;
        while(itr<matrix.size()){
            if(target>=matrix[itr][0] and target<=matrix[itr].back()){
                for(int j=0;j<matrix[itr].size();j++){
                    if(matrix[itr][j]==target)return true;
                }
                itr++;
            }
            else itr++;
        }
        return false;
    }
};