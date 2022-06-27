class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int ans1=-1;
        int ans2 = -1;
        int c1 =0;
        int c2=0;
        int freq = floor(nums.size()/3);
        vector<int>ans;
        for(int x:nums){
            if(x == ans1) c1++;
            else if(x==ans2) c2++;
            else if(c1 == 0 ){
                ans1 = x;
                c1++;
            }else if(c2==0){
                ans2=x;
                c2++;
            }else{
                c1--;
                c2--;
            }
            }
            c1 =c2=0;
            for(int x: nums){
                if(x==ans1) c1++;
                else if(x==ans2) c2++;
                
            }
            if(c1>freq) ans.push_back(ans1);
            if(c2>freq) ans.push_back(ans2);
            
        return ans;
        
      
    }
};
