class Solution {
public:
    int fn(int sum){
        int cnt =0;
        while(sum){
            cnt++;
            sum/=10;
        }
        return cnt;
    }
    string maxSumOfSquares(int num, int sum) {
        if (sum > 0 && num < fn(sum)) return "";
        if(sum> num*9) return "";
        string s = "";
        while(sum){
            int val = min(sum,9);
            s += char('0' + val);
            sum-=val;
            
        }
        s.append(num - s.length(), '0');
        return s;
    }
};