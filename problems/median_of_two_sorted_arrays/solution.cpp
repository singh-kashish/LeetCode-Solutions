class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            auto temp = nums1;
            nums1 = nums2;
            nums2 = temp;
        }
        int n1 = nums1.size() , n2 = nums2.size();
        int low = 0 , high = n1 ;
        while( low <= high ){
            int i1 = low + (high-low)/2;
            
            int i2 = ((n1+n2+1)/2) - i1;
            int max1 = i1-1 >=0 ? nums1[i1-1] : INT_MIN;
            int min1 = i1>=n1 ? INT_MAX :nums1[i1];
            int max2 = i2-1>=0 ? nums2[i2-1] : INT_MIN;
            int min2 = i2>=n2 ? INT_MAX : nums2[i2];
            if(max1<=min2 and max2<=min1){
                if( (n1+n2)%2==0){
                    return (max(max1,max2) + (double)min(min1,min2) )/2;
                }
                else return (double)max(max1,max2);
            }
            else if(max1>min2)high = i1-1;
            else low = i1+1;
        }
        return 0.0;
    }
};