class Solution {
public:
    string simplifyPath(string path) {
        vector<string>parts;
        string token;
        const int n = path.size();
       for(int i=0;i<=n;i++){
            if(i==n || path[i]=='/'){
                if(!token.empty()){
                if(token=="."){

                }
                else if(token==".."){
                    if(!parts.empty())parts.pop_back();
                }
                else {
                    parts.push_back(token);
                }
                token.clear();
            }
        }
             else{
                token.push_back(path[i]);
            }
        }
        if(parts.empty())return "/";
        string res;
        // res.reserve(path.size());
        for(const auto& t:parts){
            res.push_back('/');
            res += t;
        }
        return res;
    }
};