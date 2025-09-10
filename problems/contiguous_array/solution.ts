function findMaxLength(nums: number[]): number {
    const n = nums.length;
    let prefixSum:number = 0, maxLength:number = 0;
    let m = new Map<number,number>();
    m.set(0,-1); 
    for(let i=0; i<n; i++){
        prefixSum += nums[i]==0?-1:1;
        if(m.has(prefixSum)){
            maxLength = Math.max(maxLength, i-m.get(prefixSum));
        } else m.set(prefixSum,i);
    }
    return maxLength;
};