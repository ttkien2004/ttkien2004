class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n != 0 && n % 3 == 0) return isPowerOfThree(n/3);
        return (n == 1)? true: false;
    }
};
