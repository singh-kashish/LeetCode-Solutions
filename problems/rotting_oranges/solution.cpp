class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    fresh++;
                } else if(grid[i][j]==2){
                    q.emplace(i,j);
                }
            }
        }
        int minutes = 0;
        vector<int> dx = {0,0,1,-1};
        vector<int>dy = {1,-1,0,0};
        while(!q.empty()){
            int queueSize = q.size();
            bool rotted = false;
            for(int j=0;j<queueSize;j++){
                auto [x,y] = q.front();q.pop();
                for(int i=0;i<4;i++){
                    int nx = x + dx[i], ny = y+dy[i];
                    if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1){
                    grid[nx][ny]=2;
                    rotted = true;
                    q.emplace(nx,ny);
                    fresh--;
                }
                }
            }
            if(rotted)minutes++;
        }
        
        return fresh==0 ? minutes : -1;
    }
    
};