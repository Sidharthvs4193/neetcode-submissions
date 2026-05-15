class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> result;
      sort(nums.begin(),nums.end());
      int l,r,c;
      for(int i=0;i<nums.size();i++){
        if(nums[i]>0)break;
        if(i>0 && nums[i]==nums[i-1])continue;
        l=i+1;
        r=nums.size()-1;
        while (l<r){
            c=nums[i]+nums[l]+nums[r];
            if(c<0)l++;
            else if(c>0)r--;
            else{
                result.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
                while(l<r && nums[l]==nums[l-1])l++;
                while(l<r && nums[r]==nums[r+1])r--;
            }
        }
      }
      return result;  
    }
};
