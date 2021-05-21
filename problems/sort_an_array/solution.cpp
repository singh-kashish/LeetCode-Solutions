class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void heapify(vector<int> &num,int n,int i){
        int largest=i,left=2*i+1,right=2*i+2;
        if(left < n and num[left]>num[largest])largest=left;
        if(right<n and num[right]>num[largest])largest=right;
        if(i!=largest){
            swap(num[largest],num[i]);
            heapify(num,n,largest);
        }
    }
    //build heap
    void buildHeap(vector<int>&num,int n){
        for(int i=(n-2)/2;i>=0;i--){
            heapify(num,n,i);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        buildHeap(nums,n);
        for(int i=n-1;i>=0;i--){
            swap(nums[i],nums[0]);
            heapify(nums,i,0);
        }
        return nums;
    }
};