function combinationSum(candidates: number[], target: number): number[][] {
    let sorted = [...candidates].sort((x,y)=>x-y);
    let results : number[][]=[];
    const path :number[]= [];
    function dfs(start:number, remaining:number):void{
        if(remaining===0){
            results.push([...path]);
            return;
        }
        if(remaining<0){
            // Exceeding target
            return;
        }
        for(let i=start;i<sorted.length;i++){
            const val = sorted[i];
            if(val>remaining){
                // Since sorted is already sorted, no need to check further
                break;
            }
            // Choose value
            path.push(val);
            // Since same value is in unlimited no
            dfs(i,remaining-val);
            // Back Track
            path.pop();
        }
    }
    dfs(0,target);
    return results;
};