class Solution {
public:
    bool isPowerOfTwo(int n) {        
        if(n!= 0 && n%2 == 0) return isPowerOfTwo(n/2);
        return (n == 1)? true: false;
        
    }
};
