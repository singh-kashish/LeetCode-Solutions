/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let toReturnArray = new Array();
    for(let itr=0;itr<arr.length;itr++)if(fn(arr[itr],itr))toReturnArray.push(arr[itr]);
    return toReturnArray;
};