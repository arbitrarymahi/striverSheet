class Solution {
public:
    void findCombos(vector<int>& candidates, int target, int i, int sumSoFar, vector<int> combo,vector<vector<int>>& ans, int n){
        if(sumSoFar == target){
            ans.push_back(combo);
            return;
        }else if(sumSoFar > target || i==n )
            return;
        // }else if(i==n){
        //     return;
        // }
        
        findCombos(candidates, target, i+1, sumSoFar, combo, ans,n);
        
        combo.push_back(candidates[i]);
        sumSoFar+= candidates[i];
        findCombos(candidates, target, i, sumSoFar, combo, ans,n);
        
        return;
        
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> combo;
        findCombos(candidates, target, 0, 0, combo, ans,n);
        return ans;
    }
};
