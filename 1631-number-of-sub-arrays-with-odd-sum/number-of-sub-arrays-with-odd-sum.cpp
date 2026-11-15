class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n= arr.size();
        const int MOD = 1000000007;
        int odd =0,even =1,prefsum =0,result =0;
        for(int i=0;i<n;i++){
            prefsum +=arr[i];
            if(prefsum %2 == 0){
                result = (result + odd)%MOD;
                even++;
            }
            else{
                result = ( result+even)%MOD;
                odd++;
            }
        }
        return result;

    }
};