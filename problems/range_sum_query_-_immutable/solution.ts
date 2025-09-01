class NumArray {
    private prefixSum : number[] = [0];
    constructor(nums: number[]) {
        let n = nums.length;
        for(let i=0 ; i<n ; i++){
            this.prefixSum.push(this.prefixSum[i]+nums[i]);
        }
    }

    sumRange(left: number, right: number): number {
        return this.prefixSum[right+1]-this.prefixSum[left];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * var obj = new NumArray(nums)
 * var param_1 = obj.sumRange(left,right)
 */