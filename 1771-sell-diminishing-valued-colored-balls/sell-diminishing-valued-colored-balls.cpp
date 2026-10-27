class Solution {
public:
    int maxProfit(vector<int>& inventory, int orders) {
        const long long MOD = 1e9 + 7;
        sort(inventory.rbegin(), inventory.rend());
        int n = inventory.size();
        long long ans = 0;
        for (int i = 0;i<n && orders>0; i++) {
            long long high = inventory[i];
            long long low =(i+1<n)?inventory[i+1]: 0;
            long long diff = high - low;
            long long count = diff * (i + 1LL);
            if (count <= orders) {
                long long a = high + low + 1;
                if (diff % 2 == 0) {
                    diff /= 2;
                } else {
                    a /= 2;
                }
                long long profit = diff * a;
                profit %= MOD;
                profit = (profit*(i + 1LL)) % MOD;
                ans = (ans+profit) % MOD;
                orders -= count;
            }
            else {
                long long q = orders / (i + 1LL);
                long long r = orders % (i + 1LL);
                long long a = high + (high - q + 1);
                if (q % 2 == 0) {
                    q /= 2;
                } else {
                    a /= 2;
                }
                long long profit = q * a;
                profit %= MOD;
                profit = (profit * (i + 1LL)) % MOD;
                profit = (profit + (r * (high - (orders / (i + 1LL))) % MOD)) % MOD;
                ans = (ans + profit) % MOD;
                orders = 0;
            }
        }
        return ans;
    }
};
