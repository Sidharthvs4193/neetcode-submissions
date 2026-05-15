class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        int l=0,r=heights.size()-1;
        int c;
        while (l<r){
            if (heights[l]>heights[r]){
                c=heights[r]*(r-l);
                if(c>res)res=c;
                r--;
            }
            else{
                c=heights[l]*(r-l);
                if(c>res)res=c;
                l++;
            }
        }
    return res;
    }

};
