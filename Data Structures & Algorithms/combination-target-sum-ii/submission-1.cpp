class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> subset;
        dfs(candidates,0,target,subset,res);
        return res;
    }
    void dfs(const vector<int>& candidates, int i,int target,vector<int>& subset,vector<vector<int>>& res){
        if(target==0){
            if(!res.empty()){
                vector<int> temp=res.back();
                if(temp!=subset)res.push_back(subset);
            }
            else{res.push_back(subset);}
            
            return;
        }
        if(target<0 or i>=candidates.size())return;
        subset.push_back(candidates[i]);
        dfs(candidates,i+1,target-candidates[i],subset,res);
        subset.pop_back();
        while(i+1<candidates.size() and candidates[i]==candidates[i+1])i++;
        dfs(candidates,i+1,target,subset,res);
    }
};
