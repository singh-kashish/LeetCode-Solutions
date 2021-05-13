class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='G')result+='G';
            else if(command[i]=='(' and command[i+1]==')'){
                result+='o';
                i++;
            }
            else if((command[i]=='(' and command[i+1]=='a')and(command[i+2]=='l' and command[i+3]==')')){
                result+="al";
                i+=3;
            }
        }
        return result;
    }
};