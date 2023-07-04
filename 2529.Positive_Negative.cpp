class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pc = 0, nc = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) pc += 1;
            else if(nums[i] < 0)  nc += 1;
        }
        return max(pc,nc);
    }
};
