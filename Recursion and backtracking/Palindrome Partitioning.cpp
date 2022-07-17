class Solution {
public:
    bool checkpal(string s, int strt, int end){
        while(strt <= end){
            if(s[strt++] != s[end--]) return false;
        }return true;
    }
    void findPalindrome(string s, int index, vector<vector<string>> & ans, vector<string> part){
        if(s.length()==index){
            ans.push_back(part);
            return;
            
        }
        for(int i=index; i<s.length(); i++){
            if(checkpal(s, index, i)){
                part.push_back(s.substr(index, i-index+1));
                findPalindrome(s, i+1, ans, part);
                part.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>part;
        findPalindrome(s,0,ans,part);
        return ans;
        
    }
};
