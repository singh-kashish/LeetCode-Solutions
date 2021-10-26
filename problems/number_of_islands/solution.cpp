class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&grid){
        int m = grid.size() , n = grid[0].size();
        if(i<0 or j<0 or i>=m or j>=n or grid[i][j]=='0')return;
        grid[i][j]='0';
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        int m = grid.size() , n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    grid[i][j]='0';
                    count++;
                    dfs(i+1,j,grid);
                    dfs(i,j+1,grid);
                    dfs(i-1,j,grid);
                    dfs(i,j-1,grid);
                  
                }
            }
        }
        return count;
    }
};