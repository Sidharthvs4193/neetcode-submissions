class Solution {
public:
    int ROWS,COLS;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        ROWS=grid.size();COLS=grid[0].size();
        int res=0;
        for(int r=0;r<ROWS;r++){
            for(int c=0;c<COLS;c++){
                if(grid[r][c]==1){
                    res=max(res,dfs(grid,r,c));
                }
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& grid,int r,int c){
        if(r<0 or c<0 or r>=ROWS or c>=COLS or grid[r][c]==0)return 0;
        grid[r][c]=0;
        return 1+dfs(grid,r+1,c)+dfs(grid,r-1,c)+dfs(grid,r,c+1)+dfs(grid,r,c-1);
    }
};
