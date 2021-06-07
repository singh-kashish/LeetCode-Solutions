class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int mul=1;
        long long int su=0;
        while(n>0){
            int rem=n%10;
            mul*=rem;
            su+=rem;
            n/=10;
        }
        return mul-su;
        
    }
};