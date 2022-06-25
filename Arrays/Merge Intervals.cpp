class Solution {

    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        vector<int> tempintrvl = intervals[0];
        
        for(vector<int> i: intervals){
            if(tempintrvl[1]>= i[0]){
                tempintrvl[1] = max(tempintrvl[1],i[1]);
            }else{
                ans.push_back(tempintrvl);
                tempintrvl = i;
            }
            
        }
        ans.push_back(tempintrvl);
        return ans;
    }
    

};
