/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
//Brute force
{/*for(let itr=0;itr<nums.length;itr++){
    const currentValue = nums[itr];
    for(secondItr=itr+1;secondItr<nums.length;secondItr++){
        if(currentValue+nums[secondItr]==target)return[itr,secondItr];
    }
}
*/}
if(nums.length<2)return [];
let store = new Map();
for(i=0;i<nums.length;i++)
{
    if(store.has(target-nums[i]))return [i,store.get(target-nums[i])];
    else store.set(nums[i],i);
}
return [-1,-1];

};