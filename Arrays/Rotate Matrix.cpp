#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int rmin = 0; int rmax = n-1;
    int cmin = 0; int cmax = m-1;
    int rows = n; int cols = m;
//     cout<<rows<<" "<<cols<<endl;
    
    while(rows > 1 && cols > 1){
//       cout<<"int"<<endl;
        int c = cmin;
        int r = rmin;
        int temp = mat[r+1][c];        

        while(c <= cmax){
            int x = mat[r][c];
            mat[r][c] = temp;
            temp = x;
            c++;
        }
        c--;
        r++;

        while(r <= rmax){
            int x = mat[r][c];
            mat[r][c] = temp;
            temp = x;
            r++;
        }
        r--;
        c--;
        while(c >= cmin){
            int x = mat[r][c];
            mat[r][c] = temp;
            temp = x;
            c--;
        }
        c++;
        r--;
        while(r >= rmin){
            int x = mat[r][c];
            mat[r][c] = temp;
            temp = x;
            r--;
        }
        rmin++;rmax--;
        cmin++;cmax--;
        rows-=2;cols-=2;
    }
}
