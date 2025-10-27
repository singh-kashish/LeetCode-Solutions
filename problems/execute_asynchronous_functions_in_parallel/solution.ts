type Fn<T> = () => Promise<T>

function promiseAll<T>(functions: Fn<T>[]): Promise<T[]> {
    let newPromise:Promise<T[]>=new Promise((resolve,reject)=>{
        if(functions.length===0){
            resolve([]);
            return;
        }
        const res = new Array(functions.length).fill(null);
        let resolvedCount = 0;
        let rejected=false;
        functions.forEach((el,idx)=>{
            el().then(value=>{
                if(rejected)return;
                res[idx]=value;
                resolvedCount++;
                if(resolvedCount===functions.length)resolve(res);
            }).catch(err=>{
                if(!rejected){
                    rejected=false;
                    reject(err);
                }
            });
        });
    });
    return newPromise;

};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */