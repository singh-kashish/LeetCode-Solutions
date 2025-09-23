class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>iterators;
        int n = temperatures.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            while(iterators.size()>0 && temperatures[i]>temperatures[iterators.top()]){
                int prevIndex = iterators.top();
                iterators.pop();
                result[prevIndex] = i-prevIndex;
            }
            iterators.push(i);
        }
        return result;
    }
};