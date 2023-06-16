class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1, res = nums[0];
        while(left <= right){
            int mid = (left+right)/2;
            res = (nums[mid] < res)? nums[mid] : res;
            if(nums[mid] >= nums[left]){
                if(nums[left] <= nums[right]) right = mid - 1;
                else left = mid + 1;
            }else right = mid - 1;
        }
        return res;
    }
};
