class Solution {
public:
    string cmp(string a,string b){
        int n=a.length(),m=b.length();
        int i=0,j=0;
        while(i<n and j<m){
            if(a[i]!=b[i]){
                if(i==0)return "";
                return a.substr(0,i);
            }
            i++;j++;
        }
        if(n<=m)return a;
        else return b;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        string lcp=strs[0];
        for(int i=1;i<strs.size();i++){
            lcp=cmp(lcp,strs[i]);
        }
        return lcp;
    }
};