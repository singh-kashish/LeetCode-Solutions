class Solution {
public:
    void insertAndMove(vector<int>&nums,int i,int number){
        nums[i]=number;
        for(int j=i;j<nums.size();j++){
            nums[j] = nums[j+1];
        }
        return;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1=nums2;
            return;
        }
        else if(n==0){
            return;
        }
        else{
            //cout<<"m->"<<m<<" n->"<<n<<endl;
            int left = 0 ,right = 0;
            while(left<m and right<n){
                if(nums1[left]<=nums2[right])left++;
                else{
                   
                    swap(nums1[left++],nums2[right]);
                     sort(nums2.begin(),nums2.end());
                }
                //cout<<"left->"<<left<<" right->"<<right<<endl;
            }
            while(left<nums1.size()){
                nums1[left++]=nums2[right++];
            }
        }
        return;
    }
};