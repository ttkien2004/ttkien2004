class Solution {
public:
    int findMin(vector<int>& nums) {
        int right = nums.size()-1, left = 0, res = nums[0];        
        while(left <= right){            
            int mid = left + (right-left)/2;
            res = min(res, nums[mid]);
            if(nums[mid] >= nums[left]){
                if(nums[left] <= nums[right]){
                    right = mid - 1;
                }else
                    left = mid + 1;
            }else{
                right = mid-1;                
            }
        }
        return res;
    }
};
