class Solution {
public:
    unordered_map<string,vector<string>>adj;
    vector<string>currPath;
    vector<vector<string>>finalResult;
    vector<string> findNeighbours(string word,unordered_set<string>dict){
        vector<string>n;
        for(int i=0;i<word.length();i++){
            char oldie = word[i];
            for(int k=0;k<26;k++){
                word[i] = 'a'+k; 
                if(word[i]!=oldie and dict.find(word)!=dict.end()){
                    n.push_back(word);
                    
                }
                else continue;
            }
            word[i]=oldie;
        }
        return n;
    }
    void backtrack(string source,string destination){
        if(source == destination){
            finalResult.push_back(currPath);
        }
        for(auto x:adj[source]){
            currPath.push_back(x);
            backtrack(x,destination);
            currPath.pop_back();
        }
    }
    void bfs(string beginWord,string endWord,unordered_set<string>dict){
        queue<string>q;
        q.push(beginWord);
        if(dict.find(beginWord)!=dict.end())dict.erase(beginWord);
        unordered_set<string>visi;
        visi.insert(beginWord);
        while(q.empty()==false){
            int n=q.size();
            vector<string>visitedLevel;
            for(int i=0;i<n;i++){
                auto word = q.front();
                q.pop();
                vector<string>neighbours = findNeighbours(word,dict);
                for(auto x:neighbours){
                    if(visi.find(x)==visi.end()){
                        q.push(x);
                        visi.insert(x);
                    }
                    adj[word].push_back(x);
                    visitedLevel.push_back(x);
                }
            }
            for(auto x:visitedLevel){
                if(dict.find(x)!=dict.end())dict.erase(x);
            }
        }
    }
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>allWords(wordList.begin(),wordList.end());
        bfs(beginWord,endWord,allWords);
        currPath = {beginWord};
        backtrack(beginWord,endWord);
        return finalResult;
    }
};