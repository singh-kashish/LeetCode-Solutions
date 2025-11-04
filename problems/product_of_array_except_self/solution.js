/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const n = nums.length;
    let res = new Array(n);
    let prefix = 1, suffix = 1;
    
    for(let i=0;i<n;i++){
        res[i] = prefix;
        prefix*=nums[i];
    }
    for(let i=n-1;i>=0;i--){
        res[i]*=suffix; 
        suffix *= nums[i];
    }
    return res;
};