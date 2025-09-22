function maxFrequencyElements(nums: number[]): number {
    let freq = new Map<number,number>();
    for(let i=0;i<nums.length;i++){
        freq.set(nums[i],(freq.get(nums[i])||0)+1);
    }
    let maxFreq=-1,res=0;
    freq.forEach((count)=>{
        maxFreq = Math.max(count,maxFreq);
    });
    freq.forEach((count)=>{
        if(count===maxFreq)res+=count;
    });
    return res;
    
};