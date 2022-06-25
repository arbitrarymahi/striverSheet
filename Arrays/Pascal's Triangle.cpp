#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    int colcount = 0;
    ans.push_back(vector<long long int>(1,1));
    if( n == 1){
        return ans;
    }
    ans.push_back(vector<long long int>(2,1));
    if(n==2){
        return ans;
    }
    colcount = 2;
    for(int i=2;i<n;i++){
        int col = 1;
        vector<long long int>currentRow;
        currentRow.push_back(1);
        while(col < colcount){
            currentRow.push_back(ans[i-1][col-1]+ans[i-1][col]);
            col++;
        }
        currentRow.push_back(1);
        ans.push_back(currentRow);
        colcount++;
    }
    return ans;
}

