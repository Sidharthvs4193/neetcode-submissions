class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxW=0;
        while(l<r){
            if(heights[l]>heights[r]){
                int tmp=heights[r]*(r-l);
                maxW=max(maxW,tmp);
                r--;
            }
            else{
                int tmp=heights[l]*(r-l);
                maxW=max(maxW,tmp);
                l++;
            }
        }
        return maxW;
    }
};
