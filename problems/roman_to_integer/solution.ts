type Symbol = 'I' | 'V' | 'X' | 'L' | 'C' | 'D' | 'M';
const RomanToValue = new Map<Symbol,number>([
        ['I',1],
        ['V',5],
        ['X',10],
        ['L',50],
        ['C',100],
        ['D',500],
        ['M',1000]
    ]);
function romanToInt(s: string): number {
    function recurse(index : number, previousValue : number =0,result : number =0){
        if(index<0)return result;
        let currentChar = s[index] as Symbol;
        let currentValue : number = RomanToValue.get(currentChar);
        let updatedValue :number = currentValue>=previousValue ? result + currentValue      :result - currentValue;
        return recurse(index-1,currentValue,updatedValue);
    }
    return recurse(s.length-1);
};