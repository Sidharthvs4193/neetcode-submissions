#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> count;
        unordered_map<char,int> check;
        string result="";
        int l=0,size=s.length(),have=0,flag=0,i,r;
        pair<int,int> res={l,size};
        for(i=0;i<t.size();i++){
            count[t[i]]++;
        }
        for(r=0;r<s.length();r++){
            if(count.count(s[r])){
                check[s[r]]++;
                if(check[s[r]]==count[s[r]]){
                    have++;
                }
            }
            if(have==count.size()){
                flag=1;
                while (have==count.size()){
                    char left=s[l];
                    if(count.count(left)){
                        check[left]--;
                        if(check[left]<count[left]){
                            have--;
                        }
                    }
                    l++;
                }
                if(r-l+1<size){
                    size=r-l+2;
                    res.first=l-1;
                    res.second=size;
                }
            }
        }
        if(flag==1){
            result=s.substr(res.first,res.second);
        }
        return result;
    }
};
