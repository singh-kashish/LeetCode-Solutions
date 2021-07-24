class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        // To store departure times of people who are occupying any chairs along with chair number 
        priority_queue< pair<int,int> , vector< pair<int,int> > , greater< pair<int,int> > >pq;
        // Save the target element to preserve it before sorting
        pair< int,int > target = { times[ targetFriend ][ 0 ] , times[ targetFriend ][ 1 ] };
        // Sort the elements based on arrival time in ascending order
        sort(times.begin(),times.end());
        // Use a array to maintain state of available chairs , since n<10000. 
        vector<bool>chairs(10000,true); // true signifies available chair
        // Iterate throught the array of times
        for(int i=0;i<times.size();i++){
            // If the given values of times are our target
            if(times[i][0]==target.first and times[i][1]==target.second){
                // Take out everything from the priority queue whose departure time is before current's arrival time
                while(pq.empty()==false and pq.top().first<=times[i][0]){
                    int assigned = pq.top().second;
                    pq.pop();
                    // Assigning the chair which was occupied by this person as available again.
                    chairs[assigned]=true;
                }
                // Iterate from start to end of chairs and return the first chair which is available as result.
                for(int j=0;j<10000;j++){
                    if(chairs[j]==true)return j;
                }
            }
            // If not the desired target
            // Take out all the elements from the pq whose departure time is before current arrival time
            while(pq.empty()==false and pq.top().first<=times[i][0]){
                int assigned = pq.top().second;
                pq.pop();
                // Assigning the chair which was occupied by this person as available again.
                chairs[assigned]=true;
            }
            // Find the first available chair for this element and insert into pq and mark it's non-availability by marking chairs[j] as false
            for(int j=0;j<10000;j++){
                if(chairs[j]==true){
                    pq.push({times[i][1],j});
                    chairs[j]=false;
                     break;
                }
            }
        }
        return -1;
        
    }
};