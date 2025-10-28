/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
  
    let res = [];
    // Create map from arr1
    const ma=new Map();
    for(let obj of arr1){
        ma.set(obj.id,{...obj});
    }
    for(const x of arr2){
        const existing = ma.get(x.id);
        if(existing){
            ma.set(x.id, {...existing, ...x})
        } else{
            ma.set(x.id,{...x});
        }
    }
    return Array.from(ma.values()).sort((a,b)=>a.id-b.id);
};