class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())return 0;
        vector<int> dp;
        dp.push_back(nums[0]);
        int res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>dp.back()){
                dp.push_back(nums[i]);
                res++;
                continue;
            }
            int index=lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
            dp[index]=nums[i];
        }
        return res;
    }
};
