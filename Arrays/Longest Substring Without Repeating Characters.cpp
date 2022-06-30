class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hmap;
        int ans = 0;
        int l=0;
        int r=0;
       while(r<s.length()){
           auto x = hmap.find(s[r]);
           if (hmap.find(s[r]) == hmap.end()  || hmap[s[r]] <l){
                ans = max(r-l+1, ans);
                hmap[s[r]] = r;
                r++;
            }else{
                l= hmap[s[r]]+1;
            }
        }
        return ans;
    }
};
