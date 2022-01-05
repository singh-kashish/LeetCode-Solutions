class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size() , n = mat[0].size();
        if(m*n!=r*c)return mat;
        else{
            vector<vector<int>>result(r,vector<int>(c,0));
            int a =0 ,b =0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(b<c)result[a][b++]=mat[i][j];
                    else {
                        b=0;
                        result[++a][b++]=mat[i][j];
                    }
                }
            }
            return result;
        }
    }
};