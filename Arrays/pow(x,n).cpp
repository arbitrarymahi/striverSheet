class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
//         if(n==0)return 1;
        
//         double ans;
        
//         if(n%2==0){
            
//             double temp = myPow(x, abs(n)/2);
            
//             ans = temp*temp;
//         }else{
//             double temp = myPow(x, abs(n)/2);
            
//             ans = x*temp*temp;
//         }
            
//         if(n>0)
//         return ans;
//         else return 1/ans;
    }
};
