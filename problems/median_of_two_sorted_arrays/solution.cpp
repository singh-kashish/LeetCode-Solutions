class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            auto itr=nums1;
            nums1=nums2;
            nums2=itr;
        }
        int n1=nums1.size(),n2=nums2.size();
        int left=0,right=nums1.size();
        while( left <= right ){
            int itr1 = left+(right-left)/2;
            int itr2 = ((n1+n2+1)/2) - itr1;
            int max1 = itr1==0 ? INT_MIN : nums1[itr1-1];
            int max2 = itr2==0 ? INT_MIN : nums2[itr2-1];
            int min1 = itr1==n1 ? INT_MAX : nums1[itr1];
            int min2 = itr2==n2 ? INT_MAX : nums2[itr2];
            if( max1<=min2 and max2<=min1 ){
                if((n1+n2)%2==0)return (double)(max(max1,max2)+min(min1,min2))/2;
                else return (double)max(max1,max2);
            }
            else if(max1>min2)right=itr1-1;
            else left=itr1+1;
        }
        return 1.5;
        
    }
};