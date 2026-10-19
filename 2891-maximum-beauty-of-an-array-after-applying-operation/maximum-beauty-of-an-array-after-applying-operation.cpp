class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int st=0,ans =0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            while(nums[i]-nums[st] > 2*k) st++;
            ans = max(ans,i-st+1);
        }
        return ans;
    }
};