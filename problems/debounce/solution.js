/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
    let timerId = null // Using closures to preserve across all calls
    return function(...args) {
            if(timerId!=null){
                clearTimeout(timerId);
            }
            // const context = this;
            timerId=setTimeout(()=>{
                timerId=null;
                fn.apply(this,args);        
            },t);
        }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */