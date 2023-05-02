/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    let productOfNumbers = nums[0];
    for(let itr=1;itr<nums.length;itr++){
        productOfNumbers = productOfNumbers*nums[itr];
    }
    if(productOfNumbers>0)return 1;
    else if(productOfNumbers<0)return -1;
    else return 0;
};