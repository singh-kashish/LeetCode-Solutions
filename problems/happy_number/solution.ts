function isHappy(n: number): boolean {
    let slow = n, fast=n;
    do{
        slow = squareOfDigits(slow);
        fast = squareOfDigits(squareOfDigits(fast));
        if(fast==1)return true;
    }while(slow!=fast);
    return fast==1;
};
function squareOfDigits(n: number) : number{
    let sum=0;
    while(n>0){
        let digit : number = n%10;
        sum+=digit*digit;
        n=Math.floor(n/10);
    }
    return sum;
};