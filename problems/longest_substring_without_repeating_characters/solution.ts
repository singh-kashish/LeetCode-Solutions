function lengthOfLongestSubstring(s: string): number {
    let store = new Set<string>();
    let start =0;
    let res=0;
    for(let end=0;end<s.length;end++){
        const currChar = s[end];
        while(store.has(currChar)){
            store.delete(s[start]);
            start++;
        }
        store.add(currChar);
        res = Math.max(res,end-start+1); 
    }
    return res;
};