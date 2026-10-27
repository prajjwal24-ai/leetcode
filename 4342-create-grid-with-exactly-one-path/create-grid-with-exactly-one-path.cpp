class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> store;
        for(int i =0;i<m;i++){
            string s="";
            for(int j=0;j<n;j++){
                if(i ==0 || j == n-1) s+='.';
                else s+='#';
            }
            store.push_back(s);
        }
        return store;
    }
}; 
