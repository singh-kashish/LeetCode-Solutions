function canJump(nums: number[]): boolean {
    let maxReach:number = 0;
    for(let itr:number=0;itr<nums.length;itr++){
        if(maxReach<itr)return false;
        maxReach=Math.max(maxReach,itr+nums[itr]);
    }
    return true;
};