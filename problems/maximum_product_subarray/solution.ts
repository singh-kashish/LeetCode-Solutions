function maxProduct(nums: number[]): number {
    let n = nums.length;
    let dp = new Array<number>(n);
    let minProd=nums[0], maxProd= nums[0], res=nums[0];
    for(let i=1;i<n;i++){
        let x = nums[i];
        if(x<0){
            let temp = minProd;
            minProd = maxProd;
            maxProd = temp;
        }
        minProd = Math.min(x,x*minProd);
        maxProd = Math.max(x,x*maxProd);
        res = Math.max(res,maxProd);
    }
    return res;
};