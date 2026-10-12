class Solution {
public:
    int MOD = 1e9+7;
    int maxSum(vector<int>& nums, int k) {
        long long int n = nums.size(),result =0;
        vector<int>count(32,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                if(nums[i]&(1 << j)){
                    count[j]++;
                }
            }
        }
        while(k--){
            long long int curr =0;
            for(int b =0;b<32;b++){
                if(count[b]>0){
                    count[b]--;
                    curr |= ( (1LL<<b));
                }
            }
                result = (result+(1LL*curr*curr)%MOD)%MOD;
        }
        return result;
    }
};