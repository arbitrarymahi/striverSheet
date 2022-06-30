int Solution::solve(vector<int> &A, int B) {
    int xr = 0;
    int ans = 0;
    unordered_map<int,int> hmap;
    
    for(int x: A){
        xr = xr^x;
        if(xr == B){
            ans++;
        }
        int y = xr^B;
        
        if(hmap.find(y) != hmap.end()){
            ans += hmap[y];
        }
        hmap[xr]= hmap[xr]+1;
    }
    return ans;
}

