class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        unordered_set<int>dict;
        for(auto x:nums){
            dict.insert(x);
        }
        int longestConsecutiveResult=1;
        for(auto x:dict){
            if(dict.find(x-1)==dict.end()){
                int currentNum = x;
                int currentConsecutiveStreak=1;
                while(dict.find(currentNum+1)!=dict.end()){
                    currentConsecutiveStreak++;
                    currentNum++;
                }
                longestConsecutiveResult = max(longestConsecutiveResult,currentConsecutiveStreak);
            }
        }
        return longestConsecutiveResult;
    }
};