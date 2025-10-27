/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    // check if obj is array or object -> 1 means array 0 means object
    return Object.keys(obj).length===0;
};