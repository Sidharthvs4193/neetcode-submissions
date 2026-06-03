class Solution {
public:
    int ROWS,COLS;
    int directions[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    void islandsAndTreasure(vector<vector<int>>& grid) {
        ROWS=grid.size();COLS=grid[0].size();
        for(int r=0;r<ROWS;r++){
            for(int c=0;c<COLS;c++){
                if(grid[r][c]==INT_MAX)grid[r][c]=bfs(grid,r,c);
            }
        }
        return;
    }
    int bfs(vector<vector<int>>& grid,int r,int c){
        queue<pair<int,int>> q;
        q.push({r,c});
        vector<vector<bool>> visited(ROWS,vector<bool>(COLS,false));
        visited[r][c]=true;
        int steps=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto [row,col]=q.front();
                q.pop();
                if(grid[row][col]==0)return steps;
                for(auto dir:directions){
                    int nr=row+dir[0],nc=col+dir[1];
                    if(nr>=0 and nc>=0 and nr<ROWS and nc<COLS and !visited[nr][nc] and grid[nr][nc]!=-1){
                        visited[nr][nc]=true;
                        q.push({nr,nc});
                    }
                }
            }
            steps++;
        }
        return INT_MAX;
    }
};
