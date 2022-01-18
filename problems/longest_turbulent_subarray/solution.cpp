class Solution {
public:
    int compare(int a,int b){
        if(a==b)return 0;
        else if(a>b)return 1;
        else return -1;
    }
    int maxTurbulenceSize(vector<int>& arr) {
       int n = arr.size();
        int ans = 1;
        int start = 0;
        for(int i=1;i<n;i++){
            int c = compare(arr[i-1],arr[i]);
            if(c==0)start=i;
            else if(i==n-1 or c * compare(arr[i],arr[i+1]) !=-1 ){
                ans = max(i-start+1,ans);
                start=i;
            }
        }
        return ans;
    }
};