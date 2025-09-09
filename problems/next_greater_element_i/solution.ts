function nextGreaterElement(nums1: number[], nums2: number[]): number[] {
    const st:Array<number> = [];
    const map  = new Map<number,number>();
    const res:Array<number> = [];
    for(const x of nums2){
        while(st.length>0 && x>st[st.length-1]){
            map.set(st.pop()!, x);
        }
        st.push(x);
    }
    while(st.length>0){
        map.set(st.pop()!,-1);
    }
    for(const x of nums1){
        res.push(map.get(x)!);
    }
    return res;
};