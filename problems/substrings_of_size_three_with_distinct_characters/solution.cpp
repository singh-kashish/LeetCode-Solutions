class Solution {
public:
    int count(unordered_map<char,int>m){
        for(auto x:m){
            if(x.second>1)return 0;
        }
        return 1;
    }
    int countGoodSubstrings(string s) {
        int n=s.length();
        if(n<3){
            return 0;
        }
        else{
            int total=0;
            unordered_map<char,int>m;
            for(int i=0;i<3;i++){
                m[s[i]]++;                
            }
            total=count(m);
            
            for(int high=3;high<n;high++){
               int low=high-3;
                m[s[high]]++;
                m[s[low]]--;
                total+=count(m);
            }
            return total;
        }
    }
};