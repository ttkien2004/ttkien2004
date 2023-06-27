class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> arr[3];
        //BucketSort
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]].push_back(nums[i]);
        }
        int index = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < arr[i].size(); j++){
                nums[index++] = arr[i][j];
            }
        }
    }
};
