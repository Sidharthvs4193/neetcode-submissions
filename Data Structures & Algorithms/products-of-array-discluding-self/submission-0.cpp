class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int mul;
        for(int i=0;i<nums.size();i++){
            mul=1;
            for(int j=0;j<nums.size();j++){
                if (i!=j)mul=mul*nums[j];
            }
            result.push_back(mul);
        }
        return result;
    }
};
