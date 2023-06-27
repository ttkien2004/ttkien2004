class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            sum1 += nums[i];
        }
        sum2 = (n/2.f)*(n+1);
        return sum2 - sum1;
    }
};
