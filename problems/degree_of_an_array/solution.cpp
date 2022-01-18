class Solution {
public:
    vector<int> findDegree(vector<int>&nums){
        int n = nums.size();
        unordered_map<int,int>dict;
        for(int i=0;i<n;i++){
            dict[nums[i]]++;
        }
        int degree=INT_MIN;
        for(auto x:dict)degree=max(degree,x.second);
        vector<int>candidates;
        for(auto x:dict){
            if(x.second==degree)candidates.push_back(x.first);
        }
        return candidates;
    }
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>candidates = findDegree(nums);
        unordered_map<int,int>leftAddress;
        unordered_map<int,int>rightAddress;
        for( int i=0;i<n;i++){
            rightAddress[nums[i]]=i;
            if(leftAddress.find(nums[i])==leftAddress.end())leftAddress[nums[i]]=i;
        }
        int result = INT_MAX;
        for(auto x:candidates){
            result = min(result, rightAddress[x] - leftAddress[x] + 1);
        }
        
        return result;
    }
};