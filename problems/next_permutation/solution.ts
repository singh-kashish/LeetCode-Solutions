/**
 Do not return anything, modify nums in-place instead.
 */
function nextPermutation(nums: number[]): void {
    let i : number = nums.length-1;
    while(i>0 && nums[i-1]>=nums[i] )i--;
    if(i===0)nums.reverse();
    else{
        let j : number = nums.length-1;
        while(j>=i && nums[j]<=nums[i-1]){
            j--;
        }
        [nums[i-1],nums[j]]=[nums[j],nums[i-1]];
        reverse(nums, i, nums.length-1);
    } 
};
function reverse(nums: number[], start: number, end: number): void {
    while (start < end) {
        [nums[start], nums[end]] = [nums[end], nums[start]];
        start++;
        end--;
    }
}