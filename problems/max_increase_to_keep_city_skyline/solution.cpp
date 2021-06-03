class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>rows(m,0),cols(n,0);
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                if(grid[i][j]>=rows[i])rows[i]=grid[i][j];
                if(grid[i][j]>=cols[j])cols[j]=grid[i][j];
            }
        }
        //calculate sum
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] < rows[i] and grid[i][j]<cols[j]){
                    int res=min(rows[i],cols[j]);
                    sum+=res-grid[i][j];
                }
            }
        }
        return sum;
    }
};