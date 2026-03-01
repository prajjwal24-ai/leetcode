class Solution {
public:
    int minPartitions(string n) {
        int m = n.length();
        char maxi ='0';
        for(int i=0;i<m;i++){
            maxi = max(maxi,n[i]);
        }
        return maxi-'0';
    }
};
