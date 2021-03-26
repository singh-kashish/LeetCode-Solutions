class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int res;
        for(auto itr=m.begin();itr!=m.end();itr++){
            if(itr->second>(n/2)){
                res=itr->first;
                break;
            }
        }
        return res;
    }
};