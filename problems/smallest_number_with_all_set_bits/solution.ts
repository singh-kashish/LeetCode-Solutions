function smallestNumber(n: number): number {
    // number of bits to represent n
    const k = Math.floor(Math.log2(n)) + 1;
return (1 << k) - 1;


};