// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    static bool cmp(vector<int>&a,vector<int>&b){
	    return a[1]<b[1];
	}

    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
     vector<vector<int>> pairs;
	    for(int i=0;i<n;i++){
		pairs.push_back({start[i],end[i],i});
	    }
	    sort(pairs.begin(), pairs.end(),cmp);
	    int ans;
	    vector<int> current = pairs[0];
	    ans = 1;
	    for(int i=1;i<n;i++){
		if(pairs[i][0]>current[1]){
		    current = pairs[i];
		    ans++;
		    
		}
		
	    }
	    //sort(ans.begin(),ans.end());
	    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
