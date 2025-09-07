function threeSum(nums: number[]): number[][] {
    const n = nums.length;
    if(n<3)return [];
    let res:number[][]=[];
    nums.sort((a,b)=>a-b);
    for(let i:number=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])continue;
        let left= i+1, right = n-1;
        while(left<right){
            let sum : number = nums[i]+nums[left]+nums[right];
            if(sum==0){
                res.push([nums[i],nums[left],nums[right]]);
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1])left++;
                while(left<right && nums[right]==nums[right+1])right--;
            } else if(sum<0)left++;
            else right--;
        }
    }
    return res;
};