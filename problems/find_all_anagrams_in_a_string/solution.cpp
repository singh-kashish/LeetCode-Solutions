class Solution {
public:
    bool checker(vector<int>&dict){
        for(auto x:dict)if(x!=0)return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.length() , n2 = p.length();
        if(n1<n2)return {};
        vector<int>dict(26,0);
        for(auto x:p)dict[x-'a']++;
        vector<int>copy(dict);
        for(int i=0;i<n2;i++){
            copy[s[i]-'a']--;
        }
        vector<int>results;
        if(checker(copy))results.push_back(0);
        int start=1,end = n2;
        while(start<=n1-n2){
            copy[s[start-1]-'a']++;
            copy[s[end]-'a']--;
            if(checker(copy))results.push_back(start);
            end++;
            start++;
        }
        return results;
    }
};