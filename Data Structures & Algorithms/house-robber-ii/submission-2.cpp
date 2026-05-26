class Solution {
public:
    vector<vector<int>> cache;
    int rob(vector<int>& nums) {
        if (nums.size()==1)return nums[0];
        cache.resize(nums.size(),vector<int>(2,-1));
        return max(dfs(nums,true,0),dfs(nums,false,1));
    }
    int dfs(vector<int>& nums,bool flag,int i){
        if(i>=nums.size() or (flag and i==nums.size()-1))return 0;
        if(cache[i][flag]!=-1)return cache[i][flag];
        return cache[i][flag]=max(dfs(nums,flag,i+1),nums[i]+dfs(nums,flag or i==0,i+2));
    }
};
