class Solution {
public:
    int numTrees(int n) {
        if(n == 1) return 1;
        vector<long> arr;
        arr.push_back(1);
        arr.push_back(1);
        for(int i = 2; i <= n; i++){
            long sum = 0;
            for(int j = 0; j < i; j++){
                sum += arr[j]*arr[i-j-1];
            }
            arr.push_back(sum);
        }
        return arr[n];
    }
};
