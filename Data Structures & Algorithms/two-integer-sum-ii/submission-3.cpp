#include <bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        int n=numbers.size();
        for (int i=0;i<n;i++){
            mp[numbers[i]]=i;
        }
        int comp;
        for (int i=0;i<n;i++){
            comp=target-numbers[i];
            if (mp.find(comp)!=mp.end() && mp[comp]!=i){
                return {i+1,mp[comp]+1};
            }
        }
        return {};    
        
    }
};
