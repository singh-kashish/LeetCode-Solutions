class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        int n = numbers.size(); 
        int left = 0 , right = n-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if( sum == target and left!=right ){
                result = {left+1,right+1};
                return result;
            }
            else if( sum<target )left++;
            else right--;
        }
        return {-1,-1};
    }
};