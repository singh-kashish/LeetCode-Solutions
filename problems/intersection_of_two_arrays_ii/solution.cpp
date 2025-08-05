class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Add to hashMap the value and iterations for the smaller array
        if(nums1.size()>nums2.size())return intersect(nums2,nums1);
        unordered_map<int,int> store;
        for(auto x: nums2)store[x]++;
        vector<int>result;
        // Add to result if store has value>0 for particular key in larger array
        for(auto x: nums1){
            if(store[x]>0){
                result.push_back(x);
                store[x]--;
            }
        }
        return result;
    }
};