class Solution {
public:
    bool canCross(vector<int>& stones) {
            
            // Exception Check
            for(int i=3;i<stones.size();i++){
                if(stones[i] > 2*stones[i-1])return false;
            }
            
            unordered_set<string>visited;
            int finalStone=stones[stones.size()-1];
            unordered_set<int>availableStones;
            for(int i=0;i<stones.size();i++)availableStones.insert(stones[i]);
        
            stack<int>jumps,position;
            jumps.push(0);
            position.push(0);
        
            while(position.empty()==false){
                
                int currPosition = position.top();
                position.pop();
                int lastJumpSize = jumps.top();
                jumps.pop();
                for(int i=lastJumpSize-1;i<=lastJumpSize+1;i++){
                    if(i<=0)continue;
                    int nextJumpPosition = currPosition+i;
                    string nextPosToJump = to_string(nextJumpPosition)+"-"+to_string(i);
                    if(nextJumpPosition<currPosition)continue;
                    if(nextJumpPosition==finalStone)return true;
                    
                    else if(availableStones.find(nextJumpPosition)!=availableStones.end() and visited.find(nextPosToJump)==visited.end() ){
                        visited.insert(nextPosToJump);
                            jumps.push(i);
                            position.push(nextJumpPosition);
                    }   
                }
            }
            return false;
        
    }
};