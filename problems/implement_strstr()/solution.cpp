class Solution {
public:
    int strStr(string haystack, string needle) {
       if(needle.length()==0)return 0;
        //d,h,q
        int M = needle.length();
        int N = haystack.length();
        int d=13,q=997,h=1;
        for(int i=1;i<M;i++){
            h = (h*d) % q;
        }
        //calculate hash value for haystack and needle
        int hay=0,need=0;
        for(int i=0;i<M;i++){
            hay = ( (hay*d) + haystack[i] ) % q; 
            need = ( (need*d) + needle[i] ) % q ;
        }
        for(int i=0;i<=N-M;i++){
            if(hay==need){
                bool flag=true;
                for(int j=0;j<M;j++){
                    if(haystack[i+j] != needle[j])flag=false;
                }
                if(flag)return i;
            }
            if(i<N-M){
                hay = (d*(hay - haystack[i]*h)+haystack[i+M])%q;
            }
            if(hay<0)hay+=q;
        }
        return -1;
    }
};