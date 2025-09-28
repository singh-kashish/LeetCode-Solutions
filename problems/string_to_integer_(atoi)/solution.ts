function myAtoi(s: string): number {
    let res:number = 0;
    const INT_MIN = -Math.pow(2,31);
    const INT_MAX = Math.pow(2,31)-1;
    let r = s.trimStart();
    if(r.length===0)return 0;
    let itr = 0;
    let sign = 1;
    if(r[itr]==='+'||r[itr]==='-'){
        sign=r[itr++]==='-'?-1:1;
    }
    while(itr<r.length){
        const ch = r[itr];
        if(ch>'9' || ch<'0')break;
        const digit = ch.charCodeAt(0)-48;
        if(res>Math.floor((INT_MAX-digit)/10)){
            return sign===1?INT_MAX:INT_MIN;
        }
        res = res*10+digit;
        itr++;
    }
    res*=sign;
    if(res<INT_MIN)return INT_MIN;
    if(res>INT_MAX)return INT_MAX;
    return res;
};