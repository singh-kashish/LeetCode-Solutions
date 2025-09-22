function merge(intervals: number[][]): number[][] {
    let result = new Array<Array<number>>();
    intervals.sort((a,b)=>a[0]-b[0]);
    result.push(intervals[0]);
    for(let itr=1;itr<intervals.length;itr++){
        if(intervals[itr][0]<=result[result.length-1][1]){
            result[result.length-1][1]=Math.max(intervals[itr][1],result[result.length-1][1]);
        } else{
            result.push(intervals[itr]);
        }
    }
    return result;
};