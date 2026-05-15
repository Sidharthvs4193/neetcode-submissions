class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(check.count(comp))return {check[comp],i};
            check.insert({nums[i],i});
        }
        return {};
    }
};
