class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>result;
        result.push_back(first);
        int last=0;
        for(auto p:encoded){
            int decode=p^result[last++];
            result.push_back(decode);
        }
        return result;
    }
};