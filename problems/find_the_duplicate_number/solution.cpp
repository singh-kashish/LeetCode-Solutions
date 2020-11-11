#include<bits/stdc++.h>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        multiset<int>ms;
        for(int i=0;i<nums.size();i++){
            ms.insert(nums[i]);
        }
        int result;
        for(int i=0;i<nums.size();i++){
            int count=ms.count(nums[i]);
            if(count>1){
                   result=nums[i];
                    break;
            }
        }
        return result;
    }
};