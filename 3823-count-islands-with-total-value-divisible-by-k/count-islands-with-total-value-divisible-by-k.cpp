class Solution {
public:
    int n,m;
    long long int check(vector<vector<int>>& grid,int r,int c){
        long long int sum =0;
        if(r>=n || r<0 || c<0 || c>=m){
            return 0;
        }
        if(grid[r][c] ==0) return 0;
        sum+=grid[r][c];
        grid[r][c] =0;

        long long left = check(grid,r-1,c);
        long long right = check(grid,r+1,c);
        long long up = check(grid,r,c-1);
        long long down = check(grid,r,c+1);
        sum = sum + left+right+up+down;
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        n  = grid.size();
        m = grid[0].size();
        int cnt =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j] && check(grid,i,j)%k ==0) cnt++;
            }
        }
        return cnt;
    }
};
