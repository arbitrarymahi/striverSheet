class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> hmap;
        hmap[A[0]] = 0;
        int ans = 0;

        for(int i=1;i<n;i++){
             
             A[i] += A[i-1];
        }
        
        for(int i=0;i<n;i++){
            if(A[i]==0){
                ans = i+1;
            }else if(hmap.count(A[i])){
                ans = max(ans,i-hmap[A[i]]);
            }else{
                hmap.insert(make_pair(A[i], i));
            }
        }
        return ans;
        
        
    }
};
