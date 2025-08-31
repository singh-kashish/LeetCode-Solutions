class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)return true;
        else if(s.length()!=goal.length())return false;
        else{
            // O(n^2 solution)
            // int n = s.length(), startItr=0;
            // while(startItr<=n){
            //     shiftOnceToRight(s);
            //     if(s==goal)return true;
            //     startItr++;
            // }
            // return false;
            
            // O(1)solution below: -
            return (s+s).find(goal)!=string::npos;
        }
    }
    // O(n^2 solution)
    // void shiftOnceToRight(string &s){
    //     char startChar = s[0];
    //     for(int itr=0;itr<s.length()-1;itr++){
    //         s[itr]=s[itr+1];
    //     }
    //     s[s.length()-1]=startChar;
    //     return;
    // }
};