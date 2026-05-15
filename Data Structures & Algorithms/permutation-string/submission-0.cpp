#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.length()-s1.length();
        string t;
        sort(s1.begin(),s1.end());
        for (int i=0;i<=n;i++){
            t=s2.substr(i,s1.length());
            sort(t.begin(),t.end());
            if(s1==t){
                return true;
            }
        }
        return false;
    }
};
