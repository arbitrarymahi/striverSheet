#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //int pivot = permutation.back();
    if(n <2){
        return permutation;
    }
    int i = permutation.size()-2;
    while(i>=0 && permutation[i] > permutation[i+1]) i--;
    if(i>=0){
    int j = permutation.size()-1;
    while(permutation[i] > permutation[j]) j--;
    int temp = permutation[i];
    permutation[i] = permutation[j];
    permutation[j] = temp;
    }
    
      
    sort(permutation.begin()+i+1, permutation.end());
    return permutation;
}

