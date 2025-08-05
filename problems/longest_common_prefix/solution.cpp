class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        if(strs.size()==1)return strs[0];
        // Vertical Scanning approach - 2 loops
        for(int i=0;i<strs[0].length();i++){
            char charAtThisIndex = strs[0][i];
            //Check for each nextWord if the size of word is equal to i then that's the longest prefix or if the character at nextWord at same index is not matching then our longest prefix substring is till the last checked character because the loop below will check for all strings in the array whether the character matches or not, as well as whether the size is exceeding the current i which keeps track of first string's character index
            for(int nextWord=1;nextWord<strs.size();nextWord++){
                if(i==strs[nextWord].size() || charAtThisIndex!=strs[nextWord][i]){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};