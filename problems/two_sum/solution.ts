function twoSum(nums: number[], target: number): number[] {
    if(nums.length<2)return [];
    type pair={
        val:number;
        index:number;
    }
    let withIndex : pair[] = nums.map((val,index)=>({val,index}));
    withIndex.sort((a,b)=>a.val-b.val);
    let left =0, right=withIndex.length-1;
    while(left<right){
        const sum = withIndex[left].val+withIndex[right].val;
        if(sum==target)return [withIndex[left].index,withIndex[right].index];
        else if(sum>target)right--;
        else left++;
    }
    return [-1,-1];
};