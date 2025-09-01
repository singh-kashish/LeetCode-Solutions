class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        if(n==0 || n<2)return {-1,-1};
        int left=0, right = n-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum == target && left!=right) return{left+1,right+1};
            else if(sum<target)left++;
            else right--;
        }
        return {-1,-1};
    }
};