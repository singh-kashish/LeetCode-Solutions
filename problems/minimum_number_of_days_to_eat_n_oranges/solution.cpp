class Solution {
public:
    unordered_map<int,int>m;
    int minDays(int n) {
        if(n<=1)return n;
        if(m.find(n)==m.end()){
            m[n] = 1 + min( n%2 + minDays(n/2) , n%3 + minDays(n/3)  );
        }
        return m[n];
    }
};