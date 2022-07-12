class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0;
        int temp = 0;
        for(int x : nums){
            if(x==1)temp++;
            else{
                ans=max(ans,temp);
                temp=0;
            }
        }
        ans = max(ans,temp);
        return ans;
    }
};
