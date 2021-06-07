class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        for(int i=0;i<firstWord.length();i++){
            int x=(firstWord[i]-'a');
            firstWord[i]=(x+'0');
        }
         for(int i=0;i<secondWord.length();i++){
            int x=(secondWord[i]-'a');
            secondWord[i]=(x+'0');
        }
         for(int i=0;i<targetWord.length();i++){
            int x=(targetWord[i]-'a');
            targetWord[i]=(x+'0');
        }
        
       // cout<<firstWord<<" "<<secondWord<< " "<<targetWord;
         int x=stoi(firstWord);
         int y=stoi(secondWord);
         int z=stoi(targetWord);
         return x+y==z;
    }
};