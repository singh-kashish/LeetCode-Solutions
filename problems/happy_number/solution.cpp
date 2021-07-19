class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(s.find(n)==s.end()){
            s.insert(n);
            int nn=0;
            while(n>0){
                int p=n%10;
                nn+=p*p;
                n/=10;
            }
            if(nn==1)return true;
            n=nn;
        }
        return false;
    }
};