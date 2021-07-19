class Solution {
public:
    int addDigits(int num) {
        while(true){
            int digits=0,nn=0;
            while(num>0){
                nn+=num%10;
                num/=10;
            }
            if(nn/10==0)return nn;
            num=nn;
        }
    }
};