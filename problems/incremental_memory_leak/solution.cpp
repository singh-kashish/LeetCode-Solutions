class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int second=1;
        while(memory1>=second or memory2>=second){
            if(memory1>=memory2){
                    memory1-=second;
                    second++;
                }
            else{
                memory2-=second;
                second++;
            }
        }
        return {second,memory1,memory2};
    }
};