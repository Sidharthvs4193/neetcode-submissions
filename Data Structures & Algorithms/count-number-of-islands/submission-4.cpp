class Solution {
public:
    int directions[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int numIslands(vector<vector<char>>& grid) {
        int ROWS=grid.size();
        int COLS=grid[0].size();
        int res=0;
        for(int r=0;r<ROWS;r++){
            for(int c=0;c<COLS;c++){
                if(grid[r][c]=='1'){
                    dfs(grid,r,c);
                    res++;
                }
            }
        }
        return res;
    }
    void dfs(vector<vector<char>>& grid,int r,int c){
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c]=='0')return;
        grid[r][c]='0';
        for(int i=0;i<4;i++){
            dfs(grid,r+directions[i][0],c+directions[i][1]);
        }
    }
};
