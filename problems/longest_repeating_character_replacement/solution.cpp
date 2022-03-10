class Solution {
public:
    int characterReplacement(string s, int k) {
        int result =0;
        int pivot = 0;
        int n = s.length();
        int dict[26];
        int max_count = 0;
        memset(dict,0,sizeof(dict));
        for(int end=0;end<n;end++){
            dict[s[end]-'A']++;
            int currChar_count = dict[s[end]-'A'];
            max_count = max(max_count , currChar_count);
            while(end-pivot+1 - max_count > k){
                dict[s[pivot]-'A']--;
                pivot++;
            }
            result = max(result,end-pivot+1);
        }
        return result;
    }
};