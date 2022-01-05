class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int i=0;i<numRows;i++){
            pascal.push_back(vector<int>(i+1,1));
        }
        for(int i=0;i<numRows;i++){
            for(int j = 1 ; j < i ; j++){
                pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
        return pascal;
    }
};