class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> check;
        int l=0,r=0;
        int len=0;
        while(r<s.size()){
            if(!check.count(s[r]))check.insert(s[r]);
            else{
                while(s[l]!=s[r]){
                    check.erase(s[l]);
                    l++;
                }
                check.erase(s[l]);
                l++;
                check.insert(s[r]);
            }
            len=max(len,r-l+1);
            r++;

        }
        return len;
    }
};
