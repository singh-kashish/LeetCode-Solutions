class Solution {
public:
    
    vector<int> beautifulArray(int n) {
        vector<int>result;
        result.push_back(1);
        while(result.size()<n){
            vector<int>temp;
            for(auto x:result)if(x*2-1<=n)temp.push_back(x*2-1);
            for(auto x:result)if(x*2<=n)temp.push_back(x*2);
            result = temp;
        }
        return result;
    }
};