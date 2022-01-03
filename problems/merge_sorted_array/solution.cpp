class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            swap(nums1,nums2);
            return;
        }
        else if(n==0)return;
        else{
            int fillingPlaceHolder = m+n-1;
            int first = m-1, second = n-1;
            while( first >= 0 and second >= 0 ){
                if(nums1[first]>=nums2[second]){
                    nums1[fillingPlaceHolder--]=nums1[first--];
                }
                else{
                    nums1[fillingPlaceHolder--]=nums2[second--];
                }
            }
            if(second<0)return; 
            else if(first<0){
                while(second>=0){
                    nums1[fillingPlaceHolder--] = nums2[second--];
                }
            }
        }
    }
};