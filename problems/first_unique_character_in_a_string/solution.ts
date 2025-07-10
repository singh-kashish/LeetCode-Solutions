function firstUniqChar(s: string): number {
    let st = new Map<string,number>();
    for(let i=0;i<s.length;i++){
        st.set(s[i],(st.get(s[i])||0)+1);
    }
    for(let i=0;i<s.length;i++){
        if(st.get(s[i])===1)return i;
    }
    return -1;
}