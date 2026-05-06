class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n = box.size();
        int m = box[0].size();
        vector<vector<char>> v(n, vector<char>(m, '.'));
        for(int i = 0; i<n; i++) {
            int r = m-1;

            for(int j =m-1;j>=0;j--){
                if(box[i][j] == '*'){
                    v[i][j] = '*';
                    r = j - 1;
                }

                else if(box[i][j] == '#') {
                    v[i][r] = '#';
                    r--;
                }
            }
        }
        vector<vector<char>> vec(m, vector<char>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                vec[j][n - 1 - i] = v[i][j];
            }
        }

        return vec;
    }
};