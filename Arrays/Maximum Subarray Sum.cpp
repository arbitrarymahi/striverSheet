#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long ans = 0;
    long long currSum = 0;
    for(int i=0;i<n;i++){
        
        currSum+= arr[i];
        if(currSum <0){
            currSum = 0;
        }
        ans = max(ans,currSum);
        
    }
    return ans;
}
