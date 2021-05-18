class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(auto x:nums1){
            auto itr=find(nums2.begin(),nums2.end(),x);
            int q=itr-nums2.begin();
         
            bool vla=false;
            for(int i=q+1;i<nums2.size();i++){
                if(nums2[i]>x){
                    result.push_back(nums2[i]);
                    vla=true;
                    break;
                }
            }
            if(vla==false)result.push_back(-1);
        }
        return result;
    }
};