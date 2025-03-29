function lengthOfLongestSubstring(s: string): number {
    // if(s.length===0)return 0;
    // let maxLenSubWithoutDuplicates : number = 1;
    // let lengthOfString:number = s.length;

    // for(let i : number=0 ; i < s.length; i++){
    //     let store = new Set<string>(s[i]);
    //      for(let j : number = i+1; j<s.length;j++){
    //         if(store.has(s[j]))break;
    //         store.add(s[j]);
    //         maxLenSubWithoutDuplicates = Math.max(maxLenSubWithoutDuplicates,store.size);
    //      }
    // }
    // return maxLenSubWithoutDuplicates;
    
    // Sliding Window:
    let len : number = s.length; 
    if(len===0 ||len===1 )return len;
    let st = new Set<string>();
    let maxLen : number = 1;
    let rightPtr = 0;
    for(let i:number=0 ; i<len;i++){
        while(st.has(s[i])){
            st.delete(s[rightPtr]);
            rightPtr++;
        }
            st.add(s[i]);
            maxLen = Math.max(i-rightPtr+1,maxLen);
    }
    return maxLen;
};