class Solution {
private:
    void find(int n ,string& s){
        if(n == 1) return;
        string inverse="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1') inverse +='0';
            else inverse += '1';
        }
        s = s+'1'+inverse;
        find(n-1,s);
    }
public:
    char findKthBit(int n, int k) {
        if(n == 1) return '0';
        string s="0";
        find(n,s);
        return s[k-1];
    }
};