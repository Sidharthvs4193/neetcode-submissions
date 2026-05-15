class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int num:nums){
            if(check.count(num))return num;
            else{check.insert(num);}
        }
        return -1;
    }
};
