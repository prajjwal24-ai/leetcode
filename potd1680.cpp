#define MOD 1000000007
class Solution {
public:
    int concatenatedBinary(int n) {
        long res =0;
        for(int i=1;i<=n;i++){
            int digit = log2(i) + 1;
            res = ((res<<digit)% MOD + i)%MOD;
    }
    return res;
    }
};