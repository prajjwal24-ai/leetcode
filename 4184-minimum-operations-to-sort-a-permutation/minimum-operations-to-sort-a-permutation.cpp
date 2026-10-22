class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int p=0,i=0;
        int ans = 1000000;
        bool sorted = true;
        while(i<n){
            if(nums[i] != 0) p++;
            else break;
            i++;
        }
        for(int i = 0;i < n;i++) {
            if(nums[(p + i)%n] != i) {
                sorted = false;
                break;
            }
        }
        if(sorted){
            if (p == 0) {
                ans = 0;
            } else {
                ans = min(p, n - p + 2);
            }
        }
        vector<int> rev(nums.rbegin(), nums.rend());
        int q = 0;
        while (rev[q] != 0) {
            q++;
        }
        sorted = true;
        for (int i = 0; i < n; i++) {
            if (rev[(q + i)%n] != i) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            ans = min(ans, 1 + min(q, n - q));
        }
        if(ans == 1000000) return -1;
        return ans;
    }
};