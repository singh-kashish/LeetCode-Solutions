class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int columns=matrix[0].size();
        int rows = matrix.size();
        int i = 0,j = columns-1;
        if((rows == 1 and columns == 1)and matrix[0][0]!=target)return false;
        if(rows==1 and columns!=1){
            int j=0;
            while(j<columns){
                if(matrix[0][j++]==target)return true;
            }
            return false;
        }
        if(rows!=1 and columns==1){
            int j=0;
            while(j<rows){
                if(matrix[j++][0]==target)return true;
            }
            return false;
        }
        i = 0;
        j = columns-1;
        while(i<rows and j>=0){
            int value=matrix[i][j];
            if(value==target)return true;
            else if(value>target)j--;
            else i++;
        }
        return false;
    }
};