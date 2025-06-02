function singleNumber(nums: number[]): number {
    let xOrBit : number = nums[0];
    for(let itr=1;itr<nums.length;itr++){
        xOrBit = xOrBit ^ nums[itr];
    }
    return xOrBit;
};