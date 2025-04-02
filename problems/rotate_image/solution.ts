/**
 Do not return anything, modify matrix in-place instead.
 */
function rotate(matrix: number[][]): void {
    // Since the 1st column transform to reversed row 1 in final matrix, we can use transpose original matrix and then reverse individual rows  \
    // Transpose of original matrix
    let n : number = matrix.length;
    for(let i : number = 0;i<n;i++){
        for(let j : number = 0;j<i;j++){
            [matrix[i][j],matrix[j][i]] = [matrix[j][i],matrix[i][j]];
        }
    }
    // Reverse rows of matrix
    matrix.forEach((x:number[])=>x.reverse());

};