#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> zeroColumns;
    for(int i=0;i<n;i++){
        bool rowZero = false;
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                zeroColumns.push_back(j);
                rowZero = true;
//                 break;
            }
        }
          if(rowZero == true)
            matrix[i] = vector<int>(m);
    }
    
    for(int c : zeroColumns){
        for(int r=0;r<n;r++){
            if(matrix[r].size()>c)
                matrix[r][c] = 0;
        }
    }

}
