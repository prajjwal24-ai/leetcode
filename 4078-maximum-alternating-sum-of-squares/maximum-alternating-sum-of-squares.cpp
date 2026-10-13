class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>temp;
        int n= nums.size();
        for(int i=0;i<n;i++){
            temp.push_back(abs(nums[i]));
        }
        sort(temp.begin(),temp.end());
        int low =0,high = n-1;
        long long score =0;
        while(low<=high){
            score+= (temp[high]*temp[high]);
            high--;
            if(low<=high){
                score -=(temp[low]*temp[low]);
                low++;
            }
            else{
                break;
            }
            
            
            
        }
        return score;
    }
};