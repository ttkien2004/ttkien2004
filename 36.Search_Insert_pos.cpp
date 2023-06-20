class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;
        while(s < e){
            int m = s + (e-s)/2;            
            if(target == nums[m]) return m;
            else if(target < nums[m]) e = m - 1;
            else s = m + 1;
        }
        int m = s + (e-s)/2;
        if(target <= nums[m]) return m;
        else return m + 1;
    }
};
