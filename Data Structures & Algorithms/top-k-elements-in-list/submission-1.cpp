class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq;
        for(int num:nums){
            count[num]=count[num]+1;
        }
        for(const auto& entry:count){
            freq.push_back({entry.second,entry.first});
        }
        sort(freq.begin(),freq.end());
        vector<int> result;
        for(int i=freq.size()-1;i>=0;i--){
            result.push_back(freq[i][1]);
            if(result.size()==k)return result;
        }
        return {};

    }
};
