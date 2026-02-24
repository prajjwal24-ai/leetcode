#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        string s = "";

        while(n){
            if(n%2) s+='1';
            else s+='0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        int k = s.length();
        int idx =0,maxi =0;
        for(int i=1;i<k;i++){
            if(s[i] =='1'){
                maxi = max(maxi,i-idx);
                idx =i;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;

    cout << sol.binaryGap(n) << "\n";

    return 0;
}