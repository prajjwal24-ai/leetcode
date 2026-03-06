class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();
        bool check = false;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                check = true;
            }
            else{
                if(check) return false;
            }
        }
        return true;
    }
};