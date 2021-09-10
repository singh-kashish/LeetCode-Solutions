class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        if(n==2)return "11";
        string str = countAndSay(n-1);
        string temp;
        int i=0;
            while(i<str.length()){
                 int p = i,count=0;
                    while(str[p]==str[i]){
                        count++;
                        p++;
                    }
                    temp+=to_string(count)+str[i];
                    i = p;
            }
        
        return temp;
    }
};