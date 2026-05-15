class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int l=i+1,r=nums.size()-1;
            while (l<r){
                int target=nums[i]+nums[l]+nums[r];
                if(target==0){
                    int f=0;
                    temp={nums[i],nums[l],nums[r]};
                    for(int c=0;c<result.size();c++){
                        if(result[c]==temp){f=1;break;}
                    }
                    if(f==0){result.push_back(temp);}
                    l++;r--;
                }
                else if(target>0)r--;
                else{l++;}
            }
        }
        return result;
    }
};
