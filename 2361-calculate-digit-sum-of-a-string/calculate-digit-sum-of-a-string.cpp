
class Solution {
public:
    string solve(string s, int k) {
        string ans = "";
        int n = s.length();
        for (int i = 0;i < n;i+=k) {
            int sum = 0;
            for (int j = i; j < min(i+k,n); j++) {
                sum += s[j] - '0';
            }
            ans += to_string(sum);
        }
        return ans;
    }
    string digitSum(string s, int k) {
        while (s.length()>k) {
            s = solve(s, k);
        }
        return s;
    }
};
