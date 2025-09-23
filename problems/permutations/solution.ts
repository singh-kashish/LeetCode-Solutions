function permute(nums: number[]): number[][] {
    const n = nums.length;
    if(n==1)return [nums];
    let used = new Array<boolean>(n).fill(false);
    let path:number[] = [];
    let result : number[][] = [];
    function backtrack(path){
        if(path.length==n){
            result.push([...path]);
            return;
        }
        for(let i=0;i<n;i++){
            if(used[i])continue;
            path.push(nums[i]);
            used[i]=true;
            backtrack(path);
            used[i]=false;
            path.pop();
        }
        return;
    }
    backtrack(path);
    return result;
};