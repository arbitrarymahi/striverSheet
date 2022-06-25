#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int buytime = 0;
    int profit = 0;
    for(int i=1; i<prices.size();i++){
        
        if(prices[i]> prices[buytime]){
            profit = max(profit,prices[i]-prices[buytime] );
           
        }else{
            buytime = i;
        }
    }
    return profit;
}
