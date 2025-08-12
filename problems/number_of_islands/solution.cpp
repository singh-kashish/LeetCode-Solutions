class Solution {
public:
    void bfs(vector<vector<char>>& grid, int i,int j) {
        int m = grid.size(), n = grid[0].size();
        queue<pair<int,int>>q;
        q.push({i,j});
        grid[i][j]='0';
        int directions[4][2]={{1,0},{0,1},{0,-1},{-1,0}};
        while(!q.empty()){
            auto [row,col] = q.front();
            q.pop();
            for(auto &dir:directions){
                int deltaX=row+dir[0], deltaY = col+dir[1];
                if(deltaX>=0 && deltaY>=0 && deltaX<m && deltaY<n && grid[deltaX][deltaY]=='1'){
                    grid[deltaX][deltaY]='0';
                    q.push({deltaX,deltaY});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)return 0;
        int m = grid.size();
        int n = grid[0].size();
        int countOfIslands = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    countOfIslands++;
                    bfs(grid,i,j);
                }
            }
        }
        return countOfIslands;
    }
};