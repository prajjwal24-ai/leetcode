class Solution {
    private:
    int bits(int n){
        int cnt=0;
        while (n){
            if(n%2) cnt++;
            n/=2;
        }
        return cnt;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        map<int,vector<int>>m;
        for(int i = 0;i<n;i++){
            m[bits(arr[i])].push_back(arr[i]);
        }
        vector<int>store;
        for(auto& it : m){
            auto& vec =it.second;
            sort(vec.begin(),vec.end());
            for(auto x:vec){
                store.push_back(x);
            }
        }
        return store;
    }
};