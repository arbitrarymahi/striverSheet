vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    int repeatnum, missingnum;
    int n = A.size();
    vector<bool> arr(n, false);

     for(int i=0;i<n;i++){
          if (arr[A[i]]) 
            missingnum = A[i];
            arr[A[i]]=true;
     }
    for(int i=1;i<=n;i++){
        if(arr[i]==false){
            repeatnum = i;
        }
    }
    return {missingnum,repeatnum};
}

