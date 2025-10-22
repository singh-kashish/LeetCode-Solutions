type Fn = (...params: any[]) => Promise<any>;

function timeLimit(fn: Fn, t: number): Fn {
    
    return async function(...args) {
       let timer: ReturnType<typeof setTimeout> | null = null;

    const timeoutPromise = new Promise<never>((_, reject) => {
      timer = setTimeout(() => reject("Time Limit Exceeded"), t);
    });

    const fnPromise = (async () => {
      try {
        return await fn(...args);
      } finally {
        if (timer) clearTimeout(timer);
      }
    })();

    return Promise.race([fnPromise, timeoutPromise]);
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */