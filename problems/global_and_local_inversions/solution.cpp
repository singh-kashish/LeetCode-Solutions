class Solution {
public:
    long long int mergeGlobal(vector<int>&arr,int left,int mid,int right){
        int n1 = mid-left+1;
        int n2 = right-mid;
        long long int res=0;
        int lef[n1],righ[n2];
        for(int i=0;i<n1;i++)lef[i]=arr[i+left];
        for(int i=0;i<n2 ; i++)righ[i]=arr[i+mid+1];
        int i=0,j=0,k=left;
        while(i<n1 and j<n2){
            if(lef[i]>righ[j]){
                res+=n1-i;
                arr[k++]=righ[j++];
            }
            else {
                arr[k++]=lef[i++];
            }
        }
        while(i<n1)arr[k++]=lef[i++];
        while(j<n2)arr[k++]=righ[j++];
        return res;
    }
    long long int globalInversions(vector<int>&arr,int left,int right){
        long long int res=0;
        if(right>left){
            int mid = left+(right-left)/2;
            res+=globalInversions(arr,left,mid);
            res+=globalInversions(arr,mid+1,right);
            res+=mergeGlobal(arr,left,mid,right);
        }
        return res;
    }
    int localInversions(vector<int>&arr,int left,int right){
        long long int res=0;
        for(int i=left+1;i<=right;i++){
            if(arr[i-1]>arr[i])res++;
        }
        return res;
    }
    
    bool isIdealPermutation(vector<int>& A) {
        int n=A.size()-1;
        vector<int>copy1(A.begin(),A.end());
        vector<int>copy2(A.begin(),A.end());
        
      long long int local = localInversions(copy1,0,n);
        long long int global = globalInversions(copy2,0,n);
        return local==global;
    }
};