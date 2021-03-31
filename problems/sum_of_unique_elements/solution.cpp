class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       unordered_map<int,int>s;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        int res=0;
        for(auto itr=s.begin();itr!=s.end();itr++){
            if(itr->second==1)res+=itr->first;
        }
        return res;
    }
};