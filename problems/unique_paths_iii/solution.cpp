class Solution {
public:
    bool isValid(int a,int b,int m,int n,vector<vector<int>>&grid){
        if(a<0 or b<0 or a>=m or b>=n or grid[a][b]<0)return false;
        return true;
    }
    int empty=1,res=0;
    void solve(int i,int j,int m,int n,vector<vector<int>>&grid){
        if(isValid(i,j,m,n,grid)==false)return;
        if(grid[i][j]==2){
             if(empty==0)res++;
            return;
        }
        grid[i][j]=-3;
        empty--;
        solve(i+1,j,m,n,grid);
        solve(i-1,j,m,n,grid);
        solve(i,j+1,m,n,grid);
        solve(i,j-1,m,n,grid);
        grid[i][j]=0;
        empty++;
    }
    int uniquePathsIII(vector<vector<int>>& grid){
        pair<int,int>start;
        int m = grid.size(),n = grid[0].size();
        bool startFound = false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    start = make_pair(i,j);
                    startFound = true; 
                }
                else if(grid[i][j]==0)empty++;
            }
        }
        solve(start.first,start.second,m,n,grid);
        return res;
    }
};