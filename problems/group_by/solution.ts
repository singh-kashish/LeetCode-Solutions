interface Array<T> {
    groupBy(fn: (item: T) => string): Record<string, T[]>
}


Array.prototype.groupBy = function<T>(fn: (item: T) => string): Record<string, T[]>{
    return this.reduce((acc,item)=>{
        const key = fn(item);
        (acc[key]??=[]).push(item);
        return acc;
    }, Object.create(null));

}

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */