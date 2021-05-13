class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[256];
        fill(arr,arr+256,0);
        for(auto x:sentence){
            arr[(int)(x)]++;
        }
        for(int i=(int)('a');i<=(int)('z');i++){
            if(arr[i]<1)return false;
        }
        return true;
    }
};