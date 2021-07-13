class Solution {
public:
    static bool myCmp(vector<int>a,vector<int>b){
        return a[1] >= b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        sort(boxTypes.begin(),boxTypes.end(),myCmp);
        for(int i=0;i<boxTypes.size();i++){
            if(truckSize>0){
                if(boxTypes[i][0]<=truckSize){
                    res+=boxTypes[i][0]*boxTypes[i][1];
                    truckSize-=boxTypes[i][0];
                }
                else {
                    res+=truckSize*boxTypes[i][1];
                    truckSize=0; 
                }
            }
            else return res;
        }
        return res;
    }
};