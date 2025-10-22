function productExceptSelf(nums: number[]): number[] {
    let left =1, right=1;
    let res = new Array<number>(nums.length);
    for(let itr=0;itr<nums.length;itr++){
        res[itr]=left;
        left*=nums[itr];
    }
    for(let itr=nums.length-1;itr>=0;itr--){
        res[itr]*=right;
        right*=nums[itr];
    }
    return res;
};