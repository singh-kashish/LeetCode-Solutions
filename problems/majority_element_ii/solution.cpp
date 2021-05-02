class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>m;
         int n=nums.size();
    //     for(int i=0;i<n;i++){
    //         if(m.find(nums[i])!=m.end())m[nums[i]]++;
    //         else if(m.size()<2){
    //             m[nums[i]]=1;
    //         }
    //         else{
    //             for(auto itr=m.begin();itr!=m.end();itr++){
    //                 (itr->second)--;
    //                 if(itr->second==0){
    //                     auto p=itr;
    //                     m.erase(p);
    //                 }
    //             }
    //         }
    //     }
    //    for(auto x:m){
    //     int count=0;
    //     for(int i=0;i<n;i++){
    //         if(x.first==nums[i])
    //             count++;
    //    }
    //     if(count>floor(n/3))
    //         result.push_back(x.first);
    // }
    //     return result;
        for(int i=0;i<n;i++)m[nums[i]]++;
        for(auto x:m){
            if(x.second>floor(n/3))result.push_back(x.first);
        }
        return result;
    }
};