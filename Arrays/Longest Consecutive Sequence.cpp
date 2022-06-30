class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hset;
        int ans;
        int currseqlen;
        for(int x: nums){
            hset.insert(x);
        }
        
        for(int x:nums){
            if(hset.find(x-1) == hset.end()){
                currseqlen = 1;
                int next = x+1;
                while(hset.find(next) != hset.end()){
                    currseqlen++;
                    next++;
                }
                ans = max(ans, currseqlen);
            }
        }
        return ans;
    }
};
