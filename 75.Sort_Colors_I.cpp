class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        //Using Selection Sort
        for(int i = 0; i < n-1; i++){
            int iMin = i;
            for(int j = i; j < n; j++){
                if(nums[j] <= nums[iMin]){
                    iMin = j;
                }
            }
            int swap = nums[i];
            nums[i] = nums[iMin];
            nums[iMin] = swap;
        }        
    }
};
