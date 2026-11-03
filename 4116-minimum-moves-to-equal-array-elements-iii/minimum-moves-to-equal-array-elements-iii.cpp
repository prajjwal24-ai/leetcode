class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            sum+=(maxi-nums[i]);
        }
        return sum;
    }
};