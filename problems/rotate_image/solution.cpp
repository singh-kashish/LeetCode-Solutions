class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //take transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //exchange from left to right
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
        
    }
};