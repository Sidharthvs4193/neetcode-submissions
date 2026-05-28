class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> subset;
        vector<vector<int>> res;
        dfs(nums,target,0,subset,res);
        return res;
    }
    void dfs(vector<int>& nums,int target,int i,vector<int>& subset,vector<vector<int>>& res){
        if (target==0){
            res.push_back(subset);
            return;
        }
        if(target<0 or i>=nums.size()){
            return;
        }
        subset.push_back(nums[i]);
        dfs(nums,target-nums[i],i,subset,res);
        subset.pop_back();
        dfs(nums,target,i+1,subset,res);
    }
};
