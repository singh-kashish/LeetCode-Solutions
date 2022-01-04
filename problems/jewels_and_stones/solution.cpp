class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>s;
        for(auto x:jewels){
            s.insert(x);
        }
        int result = 0;
        for(auto x:stones){
            if(s.find(x)!=s.end())result++;
        }
        return result;
    }
};
