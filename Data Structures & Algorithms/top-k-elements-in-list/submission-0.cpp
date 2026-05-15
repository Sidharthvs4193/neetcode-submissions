class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq;
        vector<int> result;
        for (int i:nums)count[i]++;
        for(auto& [key,value]:count){
            freq.push_back({value,key});
        }
        sort(freq.rbegin(),freq.rend());
        for (int j=0;j<k;j++){
            result.push_back(freq[j][1]);
        }
        return result;
    }
};
