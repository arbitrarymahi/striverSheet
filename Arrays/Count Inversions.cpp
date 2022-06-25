#include <bits/stdc++.h> 
          
long long merge(vector<long long> &A, int low, int mid, int high){

  int la,ra;
  long long inversions = 0;
  la = mid-low+1;
  ra = high-mid;

  int larr[la];
  int rarr[ra];


  for(int i=0;i<la;i++){
    larr[i] = A[i+low];
  }

    for(int i=0;i<ra;i++){
    rarr[i] = A[i+mid+1];
  }
  int i=0;
  int j=0;
  int k=low;
  while(i<la && j<ra){
    if(larr[i]<= rarr[j]){
      A[k++] = larr[i++];
      // inv+= mid-
    }else{
      A[k++] = rarr[j++];
      inversions += la-i;
    }
  }

  while(i<la)A[k++] = larr[i++];
  while(j<ra)A[k++] = rarr[j++];

  return inversions;
}
long long mergesort( vector < long long > &A, int low, int high) {
  long long inversions = 0;
  if(high>low){
    
    int mid = low+(high-low)/2;
    inversions += mergesort(A,low,mid);
    inversions += mergesort(A, mid+1, high);

    inversions += merge(A, low, mid, high);
  }
    
    return inversions;
            }   

long long getInversions(long long *A, int n){
    // Write your code here.
    vector<long long> Ax;
    for(int i=0;i<n;i++){
        Ax.push_back(A[i]);
    }
    return mergesort(Ax, 0, n-1);;
}

