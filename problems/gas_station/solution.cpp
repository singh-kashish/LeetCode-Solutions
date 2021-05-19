class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int prevGas=0,currGas=0,start=0;
        for(int i=0;i<gas.size();i++){
            currGas += gas[i] - cost[i] ;
            if( currGas < 0 ){
                start = i+1;
                prevGas += currGas;
                currGas = 0;
            }
            
        }
        return ( currGas+prevGas >= 0 ? start : -1) ;
    }
};