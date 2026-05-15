class Solution {
    int directions[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ar=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    ar=max(ar,dfs(grid,r,c));
                }
            }
        }
        return ar;
    }
    int dfs(vector<vector<int>>& grid,int r,int c){
        int size=0;
        if(r<0 or c<0 or r>=grid.size() or c>=grid[0].size() or grid[r][c]==0)return size;
        size++;
        grid[r][c]=0;
        for(int i=0;i<4;i++){
            size+=dfs(grid,r+directions[i][0],c+directions[i][1]);
        }
        return size;
    }
};
