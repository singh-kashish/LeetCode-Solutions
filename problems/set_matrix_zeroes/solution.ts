/**
 Do not return anything, modify matrix in-place instead.
 */
function setZeroes(matrix: number[][]): void {
    let col0 : number = 1;
        for(let i : number =0;i<matrix.length;i++ ){
            for(let j : number = 0; j<matrix[i].length;j++){
                if(matrix[i][j]===0){
                    // Row mark
                    matrix[i][0]=0;
                    // col mark
                    if(j!==0)matrix[0][j]=0;
                    else col0=0;
                }
            }
        }
        for(let i : number = 1 ; i<matrix.length;i++){
            for(let j : number = 1; j<matrix[i].length;j++){
                if(matrix[i][j]!==0){
                    if(matrix[0][j]===0 || matrix[i][0]===0)matrix[i][j]=0;
                }
            }
        }
        // Row changes
        if(matrix[0][0]===0){
            for(let i : number = 0; i<matrix[0].length;i++)matrix[0][i]=0;
        }
        // Col 0 based changes
        if(col0===0){
            for(let i : number=0;i<matrix.length;i++)matrix[i][0]=0;
        }
};