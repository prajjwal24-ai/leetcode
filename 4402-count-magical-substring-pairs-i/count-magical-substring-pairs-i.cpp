class Solution {
public:
    int countMagicalPairs(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            vector<int> temp1(26,0),temp2(26,0);
            int arr[27] ={0};
            int cnt1 =0,cnt2 =0;
            for(int j = i+1;j<n;j++){
                if(!temp1[s[j]-'a']++) cnt1++;
                arr[cnt1]++;
            }
            for(int k = i;k>=0;k--){
                if(!temp2[s[k]-'a']++) cnt2++;
                ans+= arr[cnt2];
            }
        }
        return ans;
    }
};