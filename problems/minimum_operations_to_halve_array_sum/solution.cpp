class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        double currSum=0;
        for(auto x:nums){
            currSum+=x;
            pq.push(x);
        }
        double desiredSum = currSum/2;
        int steps=0;
        while(currSum>desiredSum and pq.empty()==false){
            double top = pq.top();
            pq.pop();
            currSum-=top/2;
            pq.push(top/2);
            steps++;
        }
        return steps;
    }
};