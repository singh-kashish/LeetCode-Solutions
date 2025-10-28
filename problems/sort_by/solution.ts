type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Fn = (value: JSONValue) => number

function sortBy(arr: JSONValue[], fn: Fn): JSONValue[] {
    return arr.slice().sort((a,b)=>{
        const va = fn(a);
        const vb = fn(b);
        return va-vb;
    })
};
