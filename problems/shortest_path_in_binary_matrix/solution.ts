function shortestPathBinaryMatrix(grid: number[][]): number {
    let n = grid.length;
    if(n==0)return -1;
    if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;
    type Pair={
        x:number;
        y:number;
        distance:number;
    };
    let q = new Array<Pair>();
    q.push({x:0,y:0,distance:1});
    const directions : number [][] =[[0,1],[1,0],[-1,0],[0,-1],[-1,-1],[1,1],[-1,1],[1,-1]];
    grid[0][0]=1;
    while(q.length>0){
        let curr = q.shift()!;
        if(curr.x==n-1 && curr.y==n-1)return curr.distance;
        for(const [dx,dy] of directions){
            let nx = curr.x+dx;
            let ny = curr.y+dy;
            if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0){
                grid[nx][ny]=1;
                q.push({x:nx,y:ny,distance:curr.distance+1});
            }
        }
    }
    return -1;
};