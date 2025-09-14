function subarraySum(nums: number[], k: number): number {
    let res = 0, sum = 0;
    let m = new Map<number,number>();
    m.set(0,1);
    for(let i=0; i<nums.length;i++){
        sum+=nums[i];
        if(m.has(sum-k)){
            res+=m.get(sum-k);
        }
        m.set(sum,(m.get(sum)|| 0)+1); 
    }
    return res;

};