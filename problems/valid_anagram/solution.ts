function isAnagram(s: string, t: string): boolean {
    if(s.length !== t.length)return false;
    let store = new Map<string,number>();
    for(let x=0;x<s.length;x++){
        store.set(s[x],(store.get(s[x])||0)+1);
    }
    for(let x=0;x<t.length;x++){
        if(!store.has(t[x]))return false;
        let count = store.get(t[x]);
        store.set(t[x],count-1);
    }
    for(let value of store.values()){
        if(value!==0)return false;
    }
    return true;
};