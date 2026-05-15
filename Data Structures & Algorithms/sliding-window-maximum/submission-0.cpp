class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> arr;
        int l=0,r;
        for(r=k;r<=nums.size();r++){
            int max=*max_element(nums.begin()+l,nums.begin()+r);
            arr.push_back(max);
            l++;
        }
        return arr;
    }
};
