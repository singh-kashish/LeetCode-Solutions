function rotateString(s: string, goal: string): boolean {
    if(s==goal)return true;
    else if(s.length!=goal.length)return false;
    else return (s+s).indexOf(goal)!=-1;
};