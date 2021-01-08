class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        for(int i=0;i<index.size();i++){
            auto itr=target.begin()+index[i];
            target.insert(itr,nums[i]);
        }
        return target;
    }
};