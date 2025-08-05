class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Since there always will be a number which appears in array exactly more than size of array/2, we can use Boyer-Moore Voting Algorith here to maintain a candidate and count, if count is zero set current element as the candidate and change the count-> if current element is candidate then add 1 to count else subtract 1 from the count. Since it's guranteed to have 1 element appearing more than n/2 times -> This is the most optimal solution
        int count = 0, candidate=0;
        for( int x : nums ){
            if(count==0)candidate=x;
            count += (candidate==x)?1:-1;
        } 
        return candidate;
    }
};