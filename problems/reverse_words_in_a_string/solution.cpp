class Solution {
public:
    
    string reverse(string &s,int low,int end){
        while(low<=end){
            char temp=s[low];
            s[low]=s[end];
            s[end]=temp;
            low++;
            end--;
        }
        return s;
    }
    string trim(string s)
    {
        string res = "";
        int i=0;
        while(i < s.size())
        {
            res.push_back(s[i]);
            if(s[i] == ' ' && (i < s.size() && s[i+1] == ' '))
            {
                while(i < s.size() && s[i+1] == ' ')
                    i++;
            }
            i++;
        }
        
        if(res[0] == ' ')
            res.erase(res.begin());
        if(res.back() == ' ')
            res.erase(res.end()-1);
        return res;
    }
    string reverseWords(string s) {
        
const std::string WHITESPACE = " \n\r\t\f\v";
        int low=0,n=s.length();
       // bool flag=false;
        for(int end=0;end<n;end++){
            if(s[end]==' '){
                reverse(s,low,end-1);
                low=end+1;
            }
        }
        reverse(s,low,n-1);
        reverse(s,0,n-1);
        // size_t m=s.find_first_not_of(WHITESPACE);
        // size_t k=s.find_last_not_of(WHITESPACE);
        // if(m==std::string::npos && k==std::string::npos)return s;
        // else{
        //      s=s.substr(m,k+1);
        //     return s;
        // }
        // int x=0;
        // while(s[x]==' '){
        //     x++;
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // int y=n-1;
        // while(s[y]==' '){
        //     y--;
        //     cout<<y<<" ";
        // }
        // cout<<y;
        // if(x==0 && y==n-1)return s;
        // else if(y==n-)
        // return s.substr(x,y);
        return trim(s);
        
    }
};