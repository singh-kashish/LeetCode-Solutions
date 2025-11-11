function removeElement(nums: number[], val: number): number {
    let count=0;
    nums.forEach((x)=>{
        if(x!=val){
            nums[count++]=x;
        }
    })
    return count;

};