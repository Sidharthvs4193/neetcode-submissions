class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        int c;
        while (l<r){
            c=numbers[l]+numbers[r];
            if(c>target){
                r-=1;
            }
            else if(c<target){
                l+=1;
            }
            else{
                return {l+1,r+1};
            }
        }
        return {0,0};
    }
};
