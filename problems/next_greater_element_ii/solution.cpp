class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>result(n,0);
        stack<int>st;
        for(int i=n-2;i>=0;i--){
            if(st.empty())st.push(arr[i]);
            else if(st.top()<=arr[i]){
                st.pop();
                st.push(arr[i]);
            }
            else st.push(arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(st.empty()==true){
                result[i]=-1;
                st.push(arr[i]);
            }
            else if(st.top()>arr[i]){
                result[i]=st.top();
                st.push(arr[i]);
                
            }
            else {
                while(st.empty()==false and st.top()<=arr[i]){
                    st.pop();
                }
                if(st.empty())result[i]=-1;
                else result[i]=st.top();
                st.push(arr[i]);
            }
        }
        return result;
    }
};