function twoSum(numbers: number[], target: number): number[] {
    const n = numbers.length;
    if(n==0 || n<2)return [-1,-1];
    let left = 0 , right = n-1;
    while(left<=right){
        const sum = numbers[left]+numbers[right];
        if(sum===target && left!=right)return [left+1,right+1];
        else if(sum>target)right--;
        else left++;
    }
    return [-1,-1];
};