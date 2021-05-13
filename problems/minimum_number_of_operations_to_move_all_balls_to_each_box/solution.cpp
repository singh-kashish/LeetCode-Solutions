class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>result;
        for(int i=0;i<boxes.length();i++){
            int sum=0;
            for(int j=0;j<boxes.length();j++){
                if(i!=j){
                    if(boxes[j]=='1')sum+=abs(i-j);
                }
            }
            result.push_back(sum);  
        }
        return result;
    }
};