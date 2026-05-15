class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Rows=matrix.size(),Cols=matrix[0].size();
        int l=0,h=Rows*Cols-1;
        while(l<=h){
            int m=(l+h)/2;
            int r=m/Cols;
            int c=m%Cols;
            int tmp=matrix[r][c];
            if(tmp==target)return true;
            else if(tmp>target)h=m-1;
            else{
                l=m+1;
            }
        }
        return false;
    }
};
