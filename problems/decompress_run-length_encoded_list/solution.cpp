class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> fina;
        for(int i=0;i<nums.size();i=i+2){
            int freq=nums[i],val=nums[i+1];
            for(int x=0;x<freq;x++){
                fina.push_back(val);
            }
        }
        return fina;
    }
};