class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> pick(nums.size(),false);
        vector<vector<int>> res;
        vector<int> perm;
        backtrack(nums,pick,res,perm);
        return res;
    }
    void backtrack(vector<int>& nums,vector<bool>& pick,vector<vector<int>>& res,vector<int>& perm){
        if(perm.size()==nums.size()){
            res.push_back(perm);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!pick[i]){
                perm.push_back(nums[i]);
                pick[i]=true;
                backtrack(nums,pick,res,perm);
                perm.pop_back();
                pick[i]=false;
            }
        }
    }
};
