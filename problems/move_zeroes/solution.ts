/**
 Do not return anything, modify nums in-place instead.
 */
function moveZeroes(nums: number[]): void {
    let lastZeroInd=0;
    for(let itr=0;itr<nums.length;itr++){
        if(nums[itr]!=0){
           nums[lastZeroInd]=nums[itr];
           lastZeroInd++;
        }
    }
    // Fill remaining spaces with zeroes
    for(let i=lastZeroInd;i<nums.length;i++){
        nums[i]=0;
    }
};