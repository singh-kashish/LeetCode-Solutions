class Solution {
public:
    int ceilIndex(vector<int>&tail,int left,int right,int value){
        while(right>left){
            int mid = left + ( right -left )/2;
            if(tail[mid]>=value)right=mid;
            else left=mid+1;
        }
        return right;
    }
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
         vector<int>tail;
       tail.push_back(a[0]);
       int last=0;
       for(int i=1;i<n;i++){
       	if(a[i]>tail[last]){
       		tail.push_back(a[i]);
       		last++;
		   }
		else{
			int index=ceilIndex(tail,0,last,a[i]);
			tail[index]=a[i];
		}
	   }
	   return tail.size();
    }
};