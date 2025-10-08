class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rowMask[9]={0};
        int colMask[9]={0};
        int boxMask[9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char ch = board[i][j];
                if(ch=='.')continue;
                if(ch<'1'||ch>'9')return false;
                    int b=(i/3)*3+(j/3);
                    int bit = 1<<(ch-'1');
                    if((rowMask[i] & bit) || (colMask[j]&bit) || (boxMask[b] & bit))return false;
                    rowMask[i]|=bit;
                    colMask[j]|=bit;
                    boxMask[b]|=bit;
            }
        }
        return true;
    }
};