class Solution {
public:
    bool isAnagram(string s, string t) {
        const int CHAR=256;
        char arr[CHAR];
        fill(arr,arr+CHAR,0);
        int n=s.length();
        int m=t.length();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            arr[s[i]]++;
            arr[t[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(arr[i]!=0)return false;
        }
        return true;
    }
};