class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.count(target-nums[i])>0){
                auto it=m.find(target-nums[i]);
                res.push_back(i);
                res.push_back(it->second);
            }
            else{
                m[nums[i]]=i;
            }
        }
        return res;
    }
};