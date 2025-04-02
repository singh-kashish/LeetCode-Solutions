function generateRow(row:number) : number[] {
    let ans : number = 1;
    let temp:Array<number> = [1];
    for(let j:number = 1 ; j<row; j++){
        ans = ans * (row-j);
        ans = ans/j;
        temp.push(ans);
    }
    return temp;
}
function generate(numRows: number): number[][] {
    {/*let finalArray : Array<Array<number>> = new Array([1]);
    if(numRows==1)return finalArray;
    for(let i:number=1;i<numRows;i++){
        if(i===1)finalArray.push([1,1]);
        else{
            let ArrayToPush : Array<number> = [1];
            for(let j=1;j<i;j++){
                ArrayToPush.push(finalArray[i-1][j-1]+finalArray[i-1][j]);
            }
            ArrayToPush.push(1);
            finalArray.push(ArrayToPush);
        }
    }
    return finalArray;*/}
    let res : Array<Array<number>> = [];
    for(let i : number =  1 ; i<=numRows; i++){
        res.push(generateRow(i));
    }    
    return res;
};