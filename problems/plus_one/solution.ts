function plusOne(digits: number[]): number[] {
    let n = digits.length;
    if(digits[n-1]!==9){
        digits[n-1]+=1;
        return digits;
    } else{
        let sum = 0, carry = 1, itr = n-1;
        while(itr>=0){
            if(carry===0)return digits;
            sum = digits[itr]+carry;
            digits[itr]=(sum>9?sum%10:sum);
            carry = Math.floor(sum/10);
            itr--;
        }
        if(carry!==0)digits.unshift(carry);
        return digits;
    }
};