function removeZeros(n: number): number {
    // let temp =  n.toString();
    // temp = temp.replace(/0/g,'');
    // const res = Number(temp);
    // return res;
    // Without using inbuilt fn
    let place = 1,result=0;
    while(n>0){
        const digit = n%10;
        if(digit!==0){
            result+=digit*place;
            place = place*10;    
        }
        n = Math.floor(n/10);
    }
    return result;
    
};