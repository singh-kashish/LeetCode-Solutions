class Solution {
public:
    int area(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)return 0;
        else{
            grid[i][j]=0;
            return 1+(area(grid,i+1,j)+area(grid,i,j+1)+area(grid,i-1,j)+area(grid,i,j-1));
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                res=max(res,area(grid,i,j));
            }
        }
        return res;
    }
};