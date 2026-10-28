class Solution {
public:
    int n,m;
    int dfs(vector<vector<int>>& grid, int i,int j ,int mini,vector<vector<vector<int>>>& dp){
        if(i>=n || j>=m || i<0 || j<0) return INT_MAX;
        mini = grid[i][j]^mini;
        if(i == n-1 && j == m-1) return mini;
        if(dp[i][j][mini] != -1) return dp[i][j][mini];
        
        int right = dfs(grid , i+1,j,mini ,dp);
        int down = dfs(grid,i,j+1,mini,dp);

        return dp[i][j][mini] = min(right,down);
    }
    int minCost(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int mini = 0;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(1024,-1)));
        return dfs(grid,0,0,mini,dp);
    }
};