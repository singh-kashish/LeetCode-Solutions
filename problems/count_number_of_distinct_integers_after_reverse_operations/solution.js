/**
 * @param {number[]} nums
 * @return {number}
 */
 const returnReverseOfNumber = (num) =>{
     // type coercion
     let toReturnNumber = num+'';
     // typecasting to Number -> split toReturnNumber string by '' , reverse them and join by ''.
    toReturnNumber = Number(toReturnNumber.split('').reverse().join(''));
    return toReturnNumber;
 }
var countDistinctIntegers = function(nums) {
    let arraySize = nums.length;
    for(let itr=0;itr<arraySize;itr++){
        let answerForThisPosition = returnReverseOfNumber(nums[itr]);
        nums.push(answerForThisPosition);
    }
    let x = new Set(nums);
    return Number(x.size);
};