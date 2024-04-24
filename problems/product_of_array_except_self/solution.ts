function productExceptSelf(nums: number[]): number[] {
    let leftArray:number[] = Array(nums.length);
    let rightArray:number[] = Array(nums.length);
    leftArray[0]=nums[0];
    let n:number=nums.length;
    rightArray[n-1]=nums[n-1];
    for(let itr=1;itr<nums.length;itr++){
        leftArray[itr]=leftArray[itr-1]*nums[itr];
    }
    for(let itr=n-2;itr>=0;itr--){
        rightArray[itr]=rightArray[itr+1]*nums[itr];
    }
    let res:number[]=Array(nums.length);
    res[0]=rightArray[1];
    res[nums.length-1]=leftArray[nums.length-2];
    for(let itr=1;itr<nums.length-1;itr++){
        res[itr]=leftArray[itr-1]*rightArray[itr+1];
    }
    return res;
};