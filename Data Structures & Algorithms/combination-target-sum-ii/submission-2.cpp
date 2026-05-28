class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> subset;
        vector<vector<int>> res;
        dfs(candidates,target,0,subset,res);
        return res;
    }
    void dfs(vector<int>& candidates,int target, int i, vector<int>& subset,vector<vector<int>>& res){
        if(target==0){
            res.push_back(subset);
            return;
        }
        if(target<0 or i>=candidates.size())return;
        subset.push_back(candidates[i]);
        dfs(candidates,target-candidates[i],i+1,subset,res);
        subset.pop_back();
        while(i+1<candidates.size() and candidates[i]==candidates[i+1])i++;
        dfs(candidates,target,i+1,subset,res);
    }
};
