class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int res,max=0;
        while (l<r){
            if(heights[l]>heights[r]){
                res=(r-l)*heights[r];
                if(res>max)max=res;
                r--;
            }
            else{
                res=(r-l)*heights[l];
                if(res>max)max=res;
                l++;
            }
        }
        return max;
    }
};
