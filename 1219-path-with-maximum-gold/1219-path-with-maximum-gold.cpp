class Solution {
public:
    int m, n;
    bool isValid(int i, int j, vector<vector<int>>& grid){
        return i>=0 and i <m and j >=0 and j<n and grid[i][j]>0; 
    }
    void backtrack(int i, int j, vector<vector<int>>& grid,int sum, int& ans){
        grid[i][j] *= -1;
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,-1,0, 1};
        for(int k = 0; k < 4; k++){
            int newX = i + dx[k];
            int newY = j + dy[k];
            if(isValid(newX,newY,grid)){
                backtrack(newX,newY,grid,sum + grid[newX][newY],ans);
            }
        }
        ans = max(sum ,ans);
        grid[i][j] *= -1;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j< n;j++){
                if(grid[i][j] != 0){
                    int sum = grid[i][j];
                    backtrack(i, j, grid, sum, ans);
                }
            }
        }
        return ans;
    }
};