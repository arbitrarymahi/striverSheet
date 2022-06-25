#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int z = 0;
    int o = 0;
    int t = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z++;
        }else if(arr[i]==1){
            o++;
        }else{
            t++;
        }
    }
    int i=0;
    while(i<=n){
        i++;
        if(z > 0 ) {
            z--;
            arr[i-1]=0;
            continue;
        }
         if(o > 0 ) {
             o--;
            arr[i-1]=1;
            continue;
        }
         if(t > 0 ) {
             t--;
            arr[i-1]=2;
            continue;
        }
        
    }
}
