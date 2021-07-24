class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // Copy the words from wordList into a set
        unordered_set<string>dict(wordList.begin(),wordList.end());
        //make a queue
        queue<string>todo;
        
        todo.push(beginWord);
        
        int level = 1;
        
        while(todo.empty()==false){
            int n=todo.size();
            for(int i=0;i<n;i++){
                string curr = todo.front();
                todo.pop();
                if(curr==endWord)return level;
                dict.erase(curr);
                for(int j=0;j<curr.length();j++){
                    char tempStore = curr[j];
                    for(int k=0;k<26;k++){
                        curr[j] = 'a'+ k ;
                        if(dict.find(curr)!=dict.end()){
                            todo.push(curr);
                        }
                    }
                    curr[j]=tempStore;
                }
            }
            level++;
        }
        return 0;
    }
};