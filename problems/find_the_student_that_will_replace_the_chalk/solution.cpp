class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size(),ans;
        long sum=0;
        for(int i=0;i<n;i++)sum+=chalk[i];
        k=k%sum;
        for(int i=0;i<n;i++){
            if(k<chalk[i]){
                ans=i;
                break;
            };
            k-=chalk[i];
        }
        
        return ans;
       
    }
};