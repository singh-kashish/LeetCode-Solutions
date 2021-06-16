class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result;
        result.push_back(0);
        for(int i=1;i<=n;i++){
            unsigned int count = 0 , p=i;
            while(p){
                p &=(p-1);
                count++;
            }
           
            result.push_back(count);
        }
        return result;
    }
};