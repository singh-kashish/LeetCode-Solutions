/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function(grid) {
    let rows=grid.length;
    if(rows===0)return 0;
    let cols = grid[0].length;
    let dp = Array(cols).fill(Infinity)
    dp[0]=grid[0][0];
    // First row:
    for(let j=1;j<cols;j++){
        dp[j]=grid[0][j]+dp[j-1];
    }
    //Subsequent rows:
    for(let i=1;i<rows;i++){
        dp[0] = dp[0] + grid[i][0];
        for(let j=1;j<cols;j++){
            dp[j] = grid[i][j]+Math.min(dp[j-1],dp[j]);
        }
    }
    return dp[cols-1];
};