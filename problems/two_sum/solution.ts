function twoSum(nums: number[], target: number): number[] {
    if(nums.length<2)return [];
    let hash : Map<number,number> = new Map();
    hash.set(nums[0],0);
    for(let i=1;i<nums.length;i++){
        let ele:number = nums[i];
        if(hash.has(target-ele))return [i,hash.get(target-ele)];
        else hash.set(ele,i);
    }
    return [-1,-1];
};