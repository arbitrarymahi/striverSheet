class Solution {
public:
    void dupSub(vector<int>& nums, int index, vector<int>setSoFar, int N, set<vector<int>> &tmpset){
        if(index == N){
            tmpset.insert(setSoFar);
            return;
        }
        
        dupSub(nums, index+1, setSoFar,N,tmpset);
        setSoFar.push_back(nums[index]);
        dupSub(nums, index+1, setSoFar,N,tmpset);
        return;
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> tmpset;
        vector<int> setSoFar;
        dupSub(nums, 0, setSoFar,nums.size(),tmpset);
        vector<vector<int>> ans(tmpset.begin(), tmpset.end());
        return ans;
    }
};
