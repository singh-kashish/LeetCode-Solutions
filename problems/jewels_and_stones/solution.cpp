class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>dict;
        for(auto x:jewels)dict.insert(x);
        int result = 0;
        for(auto x:stones)if(dict.find(x)!=dict.end())result++;
        return result;
    }
};
