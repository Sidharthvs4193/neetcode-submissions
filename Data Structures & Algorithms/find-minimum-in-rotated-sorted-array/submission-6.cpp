class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0,h=nums.size()-1;
        int res=nums[l];
        while(l<=h){
            if(nums[l]<nums[h]){
                res=min(nums[l],res);
                break;
            }
            int mid=(l+h)/2;
            res=min(nums[mid],res);
            if(nums[mid]>=nums[l]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
};
