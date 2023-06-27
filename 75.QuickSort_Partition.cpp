class Solution {
public:
    void swap(int &i, int &j){
        int swap = i;
        i = j;
        j = swap;
    }
    void sortColors(vector<int>& nums) {
        //QuickSort Partition
        int left = 0, right = nums.size()-1, i = 0;
        while(i <= right){
            if(nums[i] == 0){
                swap(nums[left], nums[i]);
                left++;
            }else if(nums[i] == 2){
                swap(nums[i], nums[right]);
                right--;
                i--;
            }
            i++;
        }
    }
};
