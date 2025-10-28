/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    if(n==0)return arr.slice();
    let res = [];
    let stack=[];//holds element with depth
    // Push elements from end with depth 0
    for(let i=arr.length-1; i>=0;i--){
        stack.push([arr[i],0])
    }
    while(stack.length){
        const [el,d] = stack.pop();
        if(Array.isArray(el)&&d<n){
            // Flatten one level, push children from right to left with depth d+1
            for(let i=el.length-1;i>=0;i--){
                stack.push([el[i],d+1]);
            }
        } else {
            res.push(el);
        }
    }
    return res;
    
};