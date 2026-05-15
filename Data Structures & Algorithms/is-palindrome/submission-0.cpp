#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for (int i=s.length()-1;i>=0;i--){
            if (!isalnum(s[i])){
                s.erase(i,1);
            }
        }
        string t=s;
        reverse(t.begin(),t.end());
        return t==s;
    }
};
