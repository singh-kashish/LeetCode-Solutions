class Solution {
public:
    int reverse(long x) {
        bool flag=false;
        if(x>INT_MAX || x<INT_MIN){
            return 0;
        }
        if(x<0){
            flag=true;
            x=-x;
        }
        int remainder=0;
        long rev_num=0;
        long prev_rev_num=0;
        
        while(x!=0){
            
		int curr_digit = x % 10;

		rev_num = (rev_num * 10) + curr_digit;

		
		if ((rev_num - curr_digit) /
			10 != prev_rev_num)
        {
			
			return 0;
		}

		prev_rev_num = rev_num;
		x = x / 10;
        }
        if(rev_num>INT_MAX)return 0;
        if(flag==true)rev_num=-rev_num;
        return rev_num;
    }
};