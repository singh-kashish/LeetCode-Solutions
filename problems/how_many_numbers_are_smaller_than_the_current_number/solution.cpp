class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sortedArray(nums.begin(),nums.end());
        sort(sortedArray.begin(),sortedArray.end());

        unordered_map<int,int>m;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            m[sortedArray[i]]=i;
        }
        for(int i=0;i<n;i++){
            nums[i] = m[nums[i]];
            }
        return nums;
    }
};