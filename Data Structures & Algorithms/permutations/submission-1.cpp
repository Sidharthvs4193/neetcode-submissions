class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> check(nums.size(),false);
        vector<int> subset;
        dfs(nums,check,subset);
        return res;
    }
    void dfs(vector<int>& nums, vector<bool>& check,vector<int>& subset){
        if(subset.size()==nums.size()){
            res.push_back(subset);
            return;
        }
        for(int i=0;i<check.size();i++){
            if(!check[i]){
                subset.push_back(nums[i]);
                check[i]=true;
                dfs(nums,check,subset);
                subset.pop_back();
                check[i]=false;
            }
        }
    }
};
