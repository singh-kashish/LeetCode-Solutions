function sortByBits(arr: number[]): number[] {
    let numberOfBitsNeeded = 0;
    const count1bits = (arr:number): number => {
        let c=0;
        while(arr){
            // Clear lowest set bit
            arr&=(arr-1);
            c++;
        }
        return c;
    }
    return arr.slice().sort((a,b)=>{
        let bitA = count1bits(a);
        let bitB = count1bits(b);
        if(bitA!=bitB)return bitA-bitB;
        else return a-b;
    });    

};