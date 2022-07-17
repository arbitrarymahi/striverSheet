class Solution {
public:
    int factorialfn(int n){
        int t=1;
        while(n>0)t*=n--;
        return t;
    }
    void findperm(vector<int> s, int k,string & ans){
        int n = s.size();
        if(n==1){
            ans+= to_string(s[0]);
            return;
        }
        int fac =  factorialfn(n-1);
        int index =k/fac;
        int nextK =  k%fac;
        ans+= to_string(s[index]);
        s.erase(s.begin()+index);
        findperm(s, nextK , ans);
        return;
        
        
    }
    
    string getPermutation(int n, int k) {
        vector<int> s;
        string ans;
        for(int i=1;i<=n;i++){
            s.push_back(i);
        }
        
        findperm(s,k-1,ans);
        return ans;
        
        
    }
};


//     string getPermutation(int n, int k) {
//         int arr[n];
//         for(int j=0;j<n;j++){
//             arr[j] = j+1;
//         }
//         k--;
//         while(k>0){
//             next_permutation(arr, arr+n);k--;
//         }
//         string ans;
//         for (int i: arr) {
//             ans += to_string(i);
//     }
        
        
//         return ans;
        
//     }
