/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let res=[];
    if(!Number.isFinite(size) || arr.length==0)return arr;
    for(let itr=0;itr<arr.length;itr+=size){
        res.push(arr.slice(itr,itr+size));
    }
    return res;
};
