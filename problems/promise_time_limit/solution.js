/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
    return async function(...args) {
        let timer=null;
        const timePromise = new Promise((_,reject)=>{
            timer=setTimeout(()=>{
                reject("Time Limit Exceeded");
            },t);
        });
        const orig = (async()=>{
            try{
                return await fn(...args);
                
            } finally{
                if(timer)clearTimeout(timer);
            }
    })();
    return Promise.race([orig,timePromise]);
};};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */