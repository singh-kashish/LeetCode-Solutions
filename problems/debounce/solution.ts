type F = (...args: number[]) => void

function debounce(fn: F, t: number): F {
    let timerId = null; // Declared here to use it across closures of debounce and different calls
    return function(...args) {
        if(timerId!==null){//Another timer running, cancel that scheduled call
            clearTimeout(timerId);
        }
        let context = this; // Preserving this in case fn uses it
        timerId = setTimeout(()=>{
            fn.apply(context,args);
        },t);
    }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */