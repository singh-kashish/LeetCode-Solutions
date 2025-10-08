function groupAnagrams(strs: string[]): string[][] {
    if(strs.length==1||strs.length==0)return [strs];
    function createHash(s: string){
        const hashArr = new Array(26).fill(0);
        const lowerCasedString = s.toLowerCase();
        for(const x of lowerCasedString){
            hashArr[x.charCodeAt(0)-'a'.charCodeAt(0)]++;
        }
        return hashArr.join(",");
    }
    let buckets = new Map<string,string[]>();
    for(const x of strs){
        const key = createHash(x);
        if(buckets.has(key))buckets.get(key).push(x);
        else buckets.set(key,[x]);
    }
    return Array.from(buckets.values());
    
};