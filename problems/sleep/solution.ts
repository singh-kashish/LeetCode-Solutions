async function sleep(millis: number): Promise<void> {
    const toReturnPromise:Promise<void> = new Promise((resolve,reject)=>{
        setTimeout(function(){
            resolve();
        },millis);
    });
    return await toReturnPromise;
}


/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */