function search(nums: number[], target: number): number {
    let left = 0, right = nums.length-1;
    while(left<=right){
        let mid = Math.floor(left+(right-left)/2);
        let x = nums[mid];
        if(x===target)return mid;
        if(nums[left]<=x){
            if(target<x && target>=nums[left])right=mid-1;
            else left = mid+1;
        }
        else{
            if(target>x && target<=nums[right])left = mid+1;
            else right = mid-1;
        }
    }
    return -1;
};