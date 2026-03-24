class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mod = 12345;
        vector<int>arr;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr.push_back(grid[i][j]);
            }
        }
        int size = arr.size();
        vector<long long> prefix(size, 1), suffix(size, 1);
        for(int i = 1; i < size; i++) {
            prefix[i] = (1LL*prefix[i-1] * arr[i-1]) % mod;
        }
        for(int i = size-2; i >= 0; i--) {
            suffix[i] = (1LL*suffix[i+1] * arr[i+1]) % mod;
        }
        vector<vector<int>> ans(n, vector<int>(m));
        int k = 0;
        for(int i = 0; i<size; i++) {
            int val = (prefix[i] * suffix[i]) % mod;
            ans[k/m][k%m] = val;
            k++;
        }

        return ans;
    }
};