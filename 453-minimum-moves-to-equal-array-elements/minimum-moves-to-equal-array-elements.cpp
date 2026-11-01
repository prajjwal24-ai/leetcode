class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size(),mini = INT_MAX,sum =0;
        for(int i=0;i<n;i++){
            mini = min(mini,nums[i]);
        }
        for(int i=0;i<n;i++){
            sum+=(nums[i]-mini);
        }
        return sum;
    }
};
