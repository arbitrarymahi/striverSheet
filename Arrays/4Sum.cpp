class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                
                int l=j+1; 
                int r= n-1;
                long long s = nums[i]+nums[j];
                long long halfsum = target-s;
                while(l<r){
                    if(halfsum > nums[l]+nums[r]){
                        l++;
                    }else if(halfsum < nums[l]+nums[r]){
                        r--;
                    }else{
                        ans.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                }
                if(nums[j]==nums[j+1])j++;
            }
            if(nums[i]==nums[i+1])i++;
        }
        vector<vector<int>> temp;
        for(auto x: ans){
            temp.push_back(x);
        }
        return temp;
    }
};
