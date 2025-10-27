class Solution {
public:
    long long removeZeros(long long n) {
        unsigned long long res=0;
        // Convert to string
        string original = to_string(n);
        string changed;
        for(auto c:original){
            if(c!='0')changed.push_back(c);
        }
        // Convert back to long long
        for(auto c:changed){
            res=res*10+(c-'0');
        }
        return res;
    }
};