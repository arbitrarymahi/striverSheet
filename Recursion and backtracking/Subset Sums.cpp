// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void calcSum(vector<int> arr, int index, int prevSum, vector<int>&ans, int N){
        if(index == N){
            ans.push_back(prevSum);
            return;
        }
        calcSum(arr,index+1, prevSum+arr[index], ans,N);
        calcSum(arr,index+1, prevSum, ans,N);
        return;
    }
   
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        calcSum(arr, 0, 0, ans,N);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
