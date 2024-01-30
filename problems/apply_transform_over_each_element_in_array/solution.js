/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let toReturnArray = new Array();
    for(let itr=0;itr<arr.length;itr++)toReturnArray.push(fn(arr[itr],itr));
    return toReturnArray;
};