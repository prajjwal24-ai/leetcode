class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int k = k1+ k2;
        int n = nums1.size();
        vector<int> countdiff(100001,0);
        for(int i=0;i<n;i++){
            int d = abs(nums1[i]-nums2[i]);
            countdiff[d]++;
        }
        for(int i = 1e5;i>0 && k>0;i--){
            int ops = min(countdiff[i],k);
            countdiff[i] -= ops;
            countdiff[i-1]+= ops;
            k-=ops;
        }

        long long result=0;
        for(long long int i=0;i<100001;i++){
            result+=countdiff[i]*(i*i);
        }
        return result;
    }
};