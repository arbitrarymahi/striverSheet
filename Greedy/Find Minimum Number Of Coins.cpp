int findMinimumCoins(int amount) 
{
    // Write your code here
        vector<int>coins = {1000,500,100,50,20,10,5,2,1};
        int M = 9;
        int ans=0;
        int req = amount;
        int n=0;
        while(n<M && req>0){
           
            if(coins[n]<=req){
                ans += req/coins[n];
                req -= coins[n]*(req/coins[n]);
                 
            }n++;
        }
        //cout<< req<<" "<<ans<<endl;
        return ans;
}
