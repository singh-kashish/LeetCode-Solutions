/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
function reverse(nums,start,end){
    while(start<=end){
        var temp = nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
    return;
}
var rotate = function(nums, k) {
    if(nums.length==0 || nums.length==1)return;
    var actualRotations = k%nums.length;
    if(actualRotations==0)return;
    reverse(nums,0,nums.length-1);
    reverse(nums,0,actualRotations-1);
    console.log(nums);
    reverse(nums,actualRotations,nums.length-1);
    return;
};