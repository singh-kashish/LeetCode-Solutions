class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int,unordered_set<int>>row,col;
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                row[i].insert(matrix[i][j]);
                col[j].insert(matrix[i][j]);
            }
        }
        for(auto x:row){
            if(x.second.size()!=n)return false;
        }
        for(auto x:col)if(x.second.size()!=n)return false;
        return true;
    }
};