#include <bits/stdc++.h>
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> count;
        unordered_map<char,int> check;
        string result="";
        int i;
        for (i=0;i<t.length();i++){
            count[t[i]]++;
        }
        int l=0,have=0,r=0,size=s.length(),flag=0;
        pair<int,int> res={l,size};
        for(r=0;r<s.length();r++){
            auto it=count.find(s[r]);
            if(it!=count.end()){
                check[s[r]]++;
                if (check[s[r]]==count[s[r]]){
                    have++;
                }
            }
            if (have==count.size()){
                flag=1;
                while(have==count.size()){
                    char left=s[l];
                    if(count.count(left)){
                        check[left]--;
                        if(check[left]<count[left]){
                            have--;
                        }
                    }
                    l++;
                }
                if ((r-l+1)<size){
                    size=r-l+2;
                    res.first=l-1;
                    res.second=size;
                }
            }
        }
        if (flag==1){
            result=s.substr(res.first,res.second);
        }
        return result;
    }
};
