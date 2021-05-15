class Solution {
public:
    bool checker(char x,stack<char>&st){
        
        if( ( x==')' and st.top()=='(' ) or ( x=='}' and st.top()=='{' ) or ( x==']' and st.top()=='[' ) ){
            st.pop();
            return true;
        }
        else return false;
    }
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='(' || x=='{' || x=='[')st.push(x);
            else{
                if(st.empty()==true)return false;
                bool k=checker(x,st);
                if(k==false)return false;
            }
        }
        return st.empty();
    }
};