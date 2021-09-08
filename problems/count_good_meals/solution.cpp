class Solution {
public:
    int rem = 1000000007;
    bool powerTwoCheck(int n){
        if(n==0)return false;
        while(n!=1){
            if(n%2!=0)return false;
            n = n/2;
            
        }
        return true;
    }
    int countPairs(vector<int>& deliciousness) {
        int result = 0;
        int n = deliciousness.size();
        if(n == 0 or n == 1)return 0;
        unordered_map<int,int>m;
        for(auto x:deliciousness){
            for(int i=0;i<22;i++){
                if( m.find(abs(pow(2,i)-x)) != m.end() ){
                    result  = result %rem + m[pow(2,i)-x]%rem;
                }
            }
            m[x]++;
        }
        return result;
    }
};