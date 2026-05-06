class Solution {
public:
    int reverse(int n){
        int rev =0;
        while(n!=0){
            int a = n%10;
            rev = rev*10+a;
            n = n/10;
        }
        return rev;

    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m.count(nums[i])){
                int k = m[nums[i]];
                mini = min(mini,abs(i-k));
            }
            m[reverse(nums[i])] = i;
        }
        return mini == INT_MAX ? -1:mini;
    }
};
