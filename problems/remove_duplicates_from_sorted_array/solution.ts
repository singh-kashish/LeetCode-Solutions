function removeDuplicates(nums: number[]): number {
    let store = new Set<number>();
    let fillBound=0, count=0;
    for(let i=0; i<nums.length;i++){
        if(store.has(nums[i]))continue;
        else{
            nums[fillBound++]=nums[i];
            store.add(nums[i]);
            count++;
        }
    }
    return count;
};