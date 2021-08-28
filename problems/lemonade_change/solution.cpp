class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills.size()==0)return true;
        else if(bills[0]!=5)return false;
        else {
            vector<int>cash(3,0);
            int n=bills.size();
            for(int i=0;i<n;i++){
                if(bills[i]<5)return false;
                else if(bills[i]==5){
                    cash[0]++;
                    continue;
                }
                else if(bills[i]==10){
                    if(cash[0]==0)return false;
                    else {
                        cash[0]--;
                        cash[1]++;
                        continue;
                    }
                }
                else if(bills[i]==20){
                    if(cash[1]>=1 and cash[0]>=1){
                        cash[1]--;
                        cash[0]--;
                        continue;
                    }
                    else if(cash[0]>=3){
                        cash[0]-=3;
                        continue;
                    }
                    else return false;
                }
            }
            return true;
        }
    }
};