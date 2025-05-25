function numIslands(grid: string[][]): number {
    if(!grid|| grid.length===0 || grid[0].length===0)return 0;
    const rows = grid.length , cols = grid[0].length;
    function dfs(row:number,col:number){
        if( row<0 || col< 0 || row>=rows || col>=cols || grid[row][col]==undefined || grid[row][col]==="0" )return;
        grid[row][col]='0';
        dfs(row+1,col);
        dfs(row,col+1);
        dfs(row-1,col);
        dfs(row,col-1);
    }
    let islandCount = 0;
    for(let sR=0;sR<rows;sR++){
        for(let sC=0;sC<cols;sC++){
            if(grid[sR][sC]==="1"){
                islandCount++;
                dfs(sR,sC);
            }
        }
    }
    return islandCount;
};