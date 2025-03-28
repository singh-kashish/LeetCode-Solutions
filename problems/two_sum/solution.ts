function twoSum(nums: number[], target: number): number[] {
    // BruteForce
    if(nums.length<2)return [];
    {/*for(let x : number=0;x<nums.length;x++){
        let currentNumber : number = nums[x];
        for(let itr : number=x+1;itr<nums.length;itr++){
            if(nums[itr]+currentNumber==target)return [x,itr];
        }
    }
    return [];*/}
    // Optimized with Map to store number with index
    let store : Map<number,number> = new Map();
    for(let i : number =0;i<nums.length;i++){
        if(store.has(target-nums[i]))return [i,store.get(target-nums[i])];
        else store.set(nums[i],i);
    } 
    return [];
};