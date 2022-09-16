class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // take transpose of the matrix
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // reverse every row
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
};