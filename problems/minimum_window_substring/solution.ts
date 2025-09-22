function minWindow(s: string, t: string): string {
    if(s=="" || t=="")return "";
    let need = new Map<string,number>();
    let minLeft :number = 0, minLength = Infinity;
    for(let c of t){
        need.set(c,(need.get(c)||0)+1);
    }
    let window = new Map<string,number>();
    let required:number = need.size;
    let made = 0;
    let left=0, right=0;
    while(right<s.length){
        let c = s[right];
        window.set(c, (window.get(c)||0)+1);
        if(window.has(c) && window.get(c)===need.get(c))made++;
        while(made==required){
            if(right-left+1<minLength){
                minLength = right-left+1;
                minLeft = left;
            }
            let d = s[left];
                window.set(d,(window.get(d)||0)-1);
                if(need.has(d) && need.get(d)>window.get(d)){
                    made--;
                }
                left++;
        }
         right++;
    }

    return minLength === Infinity ? "":s.slice(minLeft,minLength+minLeft);
};