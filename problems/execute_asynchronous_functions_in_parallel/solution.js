/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    let ourPromiseAllImplementation = new Promise((resolve,reject)=>{
        if(functions.length===0){
            resolve([]);
            return;
        };
        let resultAll = new Array(functions.length).fill(null);
        let rejected = false;
        let computationCount=0;
        functions.forEach((method,idx)=>{
            method().then((res)=>{
                if(rejected)return;
                resultAll[idx]=res;
                computationCount++;
                if(computationCount===functions.length){
                    resolve(resultAll);
                }
            }).catch((err)=>{
                if(!rejected){
                    rejected=true;
                    reject(err);
                }
            })
        })
    });
    return ourPromiseAllImplementation;
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */