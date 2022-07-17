class Solution {
public:
    void findCombo(vector<int>& candidates, int target,int i, int n, int sumSoFar, vector<int> setSoFar, set<vector<int>>& ans){
        if(sumSoFar == target){
            ans.insert(setSoFar);
            return;
        }else if(i==n || sumSoFar > target){
            return;
        }
        //pick ith
        sumSoFar+= candidates[i];
        setSoFar.push_back(candidates[i]);
        findCombo(candidates, target, i+1, n,sumSoFar, setSoFar, ans);
        
        //don't pick ith and all similar to ith
        sumSoFar-= candidates[i];
        setSoFar.pop_back();
        while(i<n-1 && candidates[i+1] == candidates[i])i++;
        
        findCombo(candidates, target, i+1, n,sumSoFar, setSoFar, ans);
        return;
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> tmpans;
        vector<int> setSoFar;
        sort(candidates.begin(), candidates.end());
        findCombo(candidates, target, 0, candidates.size(),0, setSoFar, tmpans);
        vector<vector<int>> ans(tmpans.begin(), tmpans.end());
        return ans;
    }
};
