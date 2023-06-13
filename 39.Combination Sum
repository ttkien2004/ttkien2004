class Solution {
protected:
    vector<vector<int>> v2;
public:    
    void Insert(vector<int>&lt, int index, vector<int>S, int target){
        if(target == 0) {
            v2.push_back(lt);
            return;
        }
        else if(target < 0 || index >= S.size()){
            return;
        }
        Insert(lt, index+1, S, target);
        lt.push_back(S[index]);
        Insert(lt, index, S, target - S[index]);
        lt.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           
        vector<int> list;    
        Insert(list, 0, candidates, target);
        return v2;
    }
};
