#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result={};
        vector<int> arr;
        unordered_map<int,int> mp;
        int i,s,comp,n,j;
        n=nums.size();
        for(i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for (i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                comp=0-(nums[i]+nums[j]);
                if (mp.find(comp)!=mp.end() && mp[comp]!=i && mp[comp]!=j){
                    arr={nums[i],nums[j],comp};
                    sort(arr.begin(),arr.end());
                    auto it=find(result.begin(),result.end(),arr);
                    if (it==result.end()){
                        result.push_back(arr);
                    }
                }
            }
        }
        return result;

        
    }
};
