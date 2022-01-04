class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>a,b;
        for(auto x:nums1)a[x]++;
        for(auto x:nums2)b[x]++;
        
     
        vector<int>result;
        int n = nums1.size();
        for( int i = 0 ; i < n ; i++ ){
            if( a.find( nums1[i] ) != a.end() and b.find( nums1[i] ) != b.end() ){
              
                int time = min(a[nums1[i]] , b[nums1[i]] );
              
                for(int t=0;t<time;t++)result.push_back(nums1[i]);
                a.erase(nums1[i]);
                b.erase(nums1[i]);
            }
        }
        return result;
    }
};