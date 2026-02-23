#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        int mp = 1 << k;
        set<string> st;
        for (int i = 0; i <= (n - k); i++) {
            string sk = "";
            for (int j = i; j < i + k; j++) {
                sk += s[j];
            }
            st.insert(sk);
        }
        cout << st.size();
        return mp == st.size();
    }
};
int main() {
    Solution sol;
    string s;
    int k;
    cin >> s >> k;

    if(sol.hasAllCodes(s, k))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
} 