class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();

        vector<int>temp;
        
        for(int i=0;i<n;i++){
            if(nums[i] != i) temp.push_back(nums[i]);
        }
        int andi =0;
        if(temp.size() !=0) andi = temp[0];
        for(int i=1;i<temp.size();i++){
            andi &=temp[i];
        }
        if(temp.size() ==0) return 0;
        return andi;
    }
};