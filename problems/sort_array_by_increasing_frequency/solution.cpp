class Solution {
public:
    
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int, int> dict;
        for (int a: nums)
                dict[a]++;
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return dict[a] == dict[b] ? a > b : dict[a] < dict[b];
        });
        return nums;
    }
};