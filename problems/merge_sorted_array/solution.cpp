class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0 and n!=0){
            nums1.clear();
            for(auto x:nums2){
                nums1.push_back(x);
            }
        }
        else if(m!=0 and n==0)return;
        else{
            int a=m-1,b=n-1,i=m+n-1;
            while(a>=0 and b>=0){
                if(nums1[a]>nums2[b])nums1[i--]=nums1[a--];
                else nums1[i--]=nums2[b--];
            }
            while(b>=0){
                nums1[i--]=nums2[b--];
            }
        }
    }
};