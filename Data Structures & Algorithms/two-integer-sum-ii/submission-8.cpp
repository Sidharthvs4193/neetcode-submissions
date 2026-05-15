class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int l=0;l<numbers.size()-1;l++){
            int comp=target-numbers[l];
            for(int r=l+1;r<numbers.size();r++){
                if(numbers[r]==comp)return {l+1,r+1};
            }
        }
        return {};
    }
};
