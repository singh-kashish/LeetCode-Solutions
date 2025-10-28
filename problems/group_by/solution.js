/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    const result = Object.create(null);
    for(let i=0;i<this.length;i++){
        const item = this[i];
        const key = fn(item);
        if(result[key]===undefined){
            result[key]=[item];
        } else{
            result[key].push(item);
        }
    }
    return result;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */