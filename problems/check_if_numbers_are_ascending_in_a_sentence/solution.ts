function areNumbersAscending(s: string): boolean {
    let n=-1, res = true;
    let sp : Array<string> = s.split(" ");
    sp.forEach((x)=>{
        console.log(x,+x);
        if(+x>=0 && +x>n){
            n=+x;
        } else if(+x>0) {
            res = false;
        }}
    );
    return res;
};