class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0;
        int pro=1;
        for(int num:nums){
            if(num==0){
                c++;
            }
            else{
                pro*=num;
            }
        }
        vector<int> result(nums.size());
        if(c>1)return result;
        else if(c==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0)result[i]=pro;
            }
            return result;
        }
        else{
            for(int i=0;i<nums.size();i++){
                result[i]=pro/nums[i];
            }
            return result;
        }
    }
};
