type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | Array<JSONValue>;

function chunk(arr: Obj[], size: number): Obj[][] {
    if(!Number.isFinite(size)||size===0)throw Error("Size not Valid");
    let res:Obj[][]=[];
    for(let i=0;i<arr.length;i+=size){
        res.push(arr.slice(i,i+size));
    }
    return res;
};
