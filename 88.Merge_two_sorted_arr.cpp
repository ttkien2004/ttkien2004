class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, k = 0;
        vector<int> arr;
        if(m == 0) {
            nums1 = nums2;
            return;
        }else if(n == 0){
            return;
        }
        if(nums1[i] <= nums2[k]) {
            arr.push_back(nums1[i]);
            i++;            
        }else{
            arr.push_back(nums2[k]);
            k++;            
        }        
        while(i < m && k < n){
            if(nums1[i] <= nums2[k]){
                arr.push_back(nums1[i]);
                i++;                
            }else {
                arr.push_back(nums2[k]);
                k++;                
            }
        }                   
        while(k < n){
            arr.push_back(nums2[k]);
            k++;
        }       
        while(i < m){
            arr.push_back(nums1[i]);
            i++;
        }
        nums1 = arr;
    }
};
