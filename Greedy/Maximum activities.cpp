#include <algorithm>
static bool cmp (pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> pairs;
    for(int i=0;i<start.size();i++){
        pairs.push_back(make_pair(start[i],finish[i]));
    }
    sort(pairs.begin(), pairs.end(), cmp);
    
    int ans=1;
    pair<int,int> current;
    current = pairs[0];
    for(int i=1;i<pairs.size();i++){
        if(pairs[i].first>= current.second){
            ans ++;
            current = pairs[i];
        }
    }
    return ans;
    // Write your code here.
}
