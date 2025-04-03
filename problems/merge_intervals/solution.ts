function merge(intervals: number[][]): number[][] {
    intervals.sort((a,b)=>a[0]-b[0]);
    let res : Array<Array<number>> = [intervals[0]];
    for(let i:number = 1;i<intervals.length;i++){
        const lastInserted : Array<number> = res[res.length-1];
        const thisItem : Array<number> = intervals[i];
        if(lastInserted[1]>=thisItem[0]){
            lastInserted[1] = Math.max(lastInserted[1],thisItem[1]);
        } else{
            res.push(intervals[i]);
        }
    }
    return res;
};