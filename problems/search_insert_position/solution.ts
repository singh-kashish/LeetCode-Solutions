function searchInsert(nums: number[], target: number): number {
    let l=0,r = nums.length-1;
    while(l<=r){
        let mid = Math.floor((r-l)/2)+l;
        const numAtMid = nums[mid];
        if(target === numAtMid){
            return mid;
        } else if(target>numAtMid){
            l=mid+1;
        } else{
            r=mid-1;
        }
    }
    return l;
};