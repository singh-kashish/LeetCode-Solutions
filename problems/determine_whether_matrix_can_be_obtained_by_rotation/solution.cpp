class Solution {
public:
    void rotate(vector<vector<int>>&mat){
        // take transpose
        int n = mat.size();
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        //reverse every row
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(mat[i][j],mat[i][n-j-1]);
            }
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int times=0;times<4;times++){
            if(mat==target)return true;
            else rotate(mat);
        }
        return false;
    }
};