class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr = nums;
        for(int i = 0; i < nums.size(); i++){
            int set = (i+nums.size()-(k-1)-1);
            if(set < 0) set = (nums.size()+set)%(nums.size());
            else set = set%(nums.size());
            arr[i] = nums[set];
        }
        nums = arr;
    }
};
