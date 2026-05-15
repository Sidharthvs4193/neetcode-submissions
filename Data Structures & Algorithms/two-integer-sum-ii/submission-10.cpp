class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> check;
        for(int i=0;i<numbers.size();i++){
            int comp=target-numbers[i];
            if(check.count(comp))return {check[comp]+1,i+1};
            else{
                check.insert({numbers[i],i});
            }
        }
        return {0,0};
    }
};
