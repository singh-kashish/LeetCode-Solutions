class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        for(auto x:queries){
            int itr=0,currSum=0;
            while(itr<nums.size() and currSum+nums[itr]<=x){
                currSum+=nums[itr];
                itr++;
            }
            result.push_back(itr);
        }
        return result;
    }
};