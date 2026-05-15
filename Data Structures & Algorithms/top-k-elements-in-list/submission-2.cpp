class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> result;
        int maxS=0;
        for(int num:nums){
            mp[num]++;
            maxS=max(maxS,mp[num]);
        }
        vector<vector<int>> rank(maxS+1);
        for(auto &it:mp){
            rank[it.second].push_back(it.first);
        }
        for(int i=rank.size()-1;i>=0;i--){
            if (k==0)break;
            for(int val:rank[i]){
                result.push_back(val);
                k--;
            }
        }
        return result;
    }
};
