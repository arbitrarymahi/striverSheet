class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();
        int low=0;
        int high = n*m-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int x = mid/m;
            int y = mid%m;
            
            if(target>matrix[x][y]){
                low = mid+1;
            }else if(target < matrix[x][y]){
                high = mid-1;
            }else{
                return true;
            }
        }return false;
    }
};
