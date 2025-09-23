function floodFill(image: number[][], sr: number, sc: number, color: number): number[][] {
    const startingColor = image[sr][sc];
    const m = image.length, n = image[0].length;
    if(startingColor===color)return image;
    function dfs(row: number, col: number):number[][]{
        if(row<0 || row>=m || col<0 || col>=n || image[row][col]!==startingColor)return;
        if(image[row][col]===startingColor){
            image[row][col] = color;
        }
        dfs(row+1,col);
        dfs(row-1,col);
        dfs(row,col+1);
        dfs(row,col-1);
        return image;
    }
    return dfs(sr,sc);
};
