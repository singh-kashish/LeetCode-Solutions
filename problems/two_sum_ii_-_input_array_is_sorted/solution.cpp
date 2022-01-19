class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0 ,right = numbers.size()-1;
        while(left<right){
            int currentValue = numbers[left] + numbers[right];
            if(currentValue==target)return {left+1,right+1};
            else if(currentValue>target)right--;
            else left++;
        }
        return {-1};
    }
};