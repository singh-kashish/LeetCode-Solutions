class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxValueOf3in32BitsInt = pow(3,19);
        return (n>0 && (maxValueOf3in32BitsInt%n==0));
    }
};