function findDuplicate(nums: number[]): number {
    if(nums.length<=2)return nums[0];
    let slow : number = 0;
    let fast : number = 0;
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow!=fast);
    slow = 0;
    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
};