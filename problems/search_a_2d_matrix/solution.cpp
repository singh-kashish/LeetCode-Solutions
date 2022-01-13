class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0;
        int rowMax = matrix.size() , colMax = matrix[0].size();
        if(colMax==1){
            for(auto x:matrix)if(x[0]==target)return true;
            return false;
        }
        int rowNum = 0;
        while(rowNum+1<rowMax and matrix[rowNum+1][0] <= target)rowNum++;
        for(int colNum=0;colNum<colMax;colNum++){
            if(matrix[rowNum][colNum]==target)return true;
        }
        return false;
        }
};