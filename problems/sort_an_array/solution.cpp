class Solution {
public:
    void merge(vector<int>&nums,int start,int mid,int end){
        int n1=mid-start+1;
        int n2=end-mid;
        vector<int>left(n1);
        vector<int>right(n2);
        for(int i=0;i<n1;i++){
            left[i]=nums[i+start];
        }
        for(int j=0;j<n2;j++){
            right[j]=nums[j+mid+1];
        }
        int i=0,j=0,itr=start;
        while(i<n1 and j<n2){
            if(left[i]<=right[j]){
                nums[itr++]=left[i++];
            }
            else{
                nums[itr++]=right[j++];
            }
        }
        while(i<n1){
            nums[itr++]=left[i++];
        }
        while(j<n2){
            nums[itr++]=right[j++];
        }
        left.clear();
        right.clear();
    }
    void mergeSort(vector<int>&nums,int start,int end){
        if(end>start){
            int mid=start+(end-start)/2;
            mergeSort(nums,start,mid);
            mergeSort(nums,mid+1,end);
            merge(nums,start,mid,end);
        }
        else return;
        
    }
    vector<int> sortArray(vector<int>& nums) {
        int start =0 , end = nums.size()-1;
        mergeSort(nums,start,end);
        return nums;
    }
};