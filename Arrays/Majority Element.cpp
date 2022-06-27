class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count = 0;
        
        for(int x: nums){
            if(count == 0){
                ans = x;
            }
            if(x==ans)count++;
            else count--;
            
        }
        return ans;
    }
};
