type Fn = (...params: number[]) => number

function memoize(fn: Fn): Fn {
    let memoizeSet = new Map();
    
    return function(...args):number {
       let key:string = JSON.stringify(args);
    if(memoizeSet.has(key)){
        return memoizeSet.get(key);
    }
    else{
        let ans:number = fn(...args);
        memoizeSet.set(key , ans);
        return ans;
    }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */