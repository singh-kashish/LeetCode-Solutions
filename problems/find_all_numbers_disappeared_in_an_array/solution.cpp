class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX,n=nums.size();
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        int arr[n+1];
        fill(arr,arr+n+1,0);
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(arr[i]==0)v.push_back(i);
        }
        return v;
    }
};