class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        int l=0,h=(rows*cols)-1;
        while(l<=h){
            int m=(l+h)/2;
            int r=m/cols;
            int c=m%cols;
            if(matrix[r][c]==target)return true;
            else if(matrix[r][c]>target)h=m-1;
            else{l=m+1;}
        }
        return false;
    }
};
