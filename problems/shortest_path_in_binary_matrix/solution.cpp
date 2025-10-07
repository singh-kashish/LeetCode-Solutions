class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        if(m==0 || n==0 || grid[0][0]==1 || grid[m-1][n-1]==1)return -1;
        // change directions to pairs for clarity
        vector<pair<int,int>> directions = {{0,1},{1,0},{-1,0},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};

        // enqueue start and mark visited
        queue<pair<pair<int,int>,int>> q;
        q.push({{0,0}, 1});
        grid[0][0] = 1;

        while (!q.empty()) {
            auto curr = q.front(); q.pop();
            int r = curr.first.first, c = curr.first.second, d = curr.second;

            if (r == m-1 && c == n-1) return d; // early exit

            for (auto [dr, dc] : directions) {
                int nr = r + dr, nc = c + dc;
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 0) {
                    grid[nr][nc] = 1;             // mark visited at enqueue
                    q.push({{nr, nc}, d + 1});
                }
            }
        }
        return -1;

        }
    
};