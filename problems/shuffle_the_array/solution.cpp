class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res(2*n);
        int a=0,b=n;
        for(int i=0;i<2*n;i++){
            if(i%2){
                res[i]=nums[b];
                b++;
            }
            else{
                res[i]=nums[a];
                a++;
            }
        }
        return  res;
    }
};