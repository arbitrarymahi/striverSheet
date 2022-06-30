class Solution {
public:
//     int getIndex(vector<int> v, int K)
// {
//     auto it = find(v.begin(), v.end(), K);
  
   
//         int index = it - v.begin();
      
//        return index;
// }
    
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> temp;
        
        for(int i=0;i<nums.size();i++){
            if(temp.find(target-nums[i]) != temp.end()){
                return {i, temp[target-nums[i]]};
            }
            temp[nums[i]]=i;
        }
        return nums;
        
 // O(nlogn complexity O(n) space complexity)       
//         vector<int> x = nums;
//         sort(x.begin(), x.end());
//         int i=0;int j=x.size()-1;
//         while(i<j){
//             int temp =x[i]+x[j];
//             if(temp>target){
//                 j--;
//             }else if(temp<target){
//                 i++;
//             }else
//             {
//                 if(x[i]==x[j]){
//                     int f = getIndex(nums, x[i]);
//                     nums.erase(std::find(nums.begin(),nums.end(),x[i]));
                    
//                 return {f,getIndex(nums, x[j])+1};                
                    
                
//             }else{
//                 return {getIndex(nums, x[i]),getIndex(nums, x[j])};                
//             }
//             }
//         }
//         return nums;
    }
};
