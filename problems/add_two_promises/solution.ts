type P = Promise<number>

async function addTwoPromises(promise1: P, promise2: P): P {
    const toReturnPromise:P = new Promise((resolve,reject)=>{
        Promise.allSettled([promise1,promise2]).then((results)=>{
        let final=0;
        results.forEach((result)=>{
            if(result.status==="fulfilled")final+=result.value;
        });
        resolve(final);
    });
    });
    return toReturnPromise;
     
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */