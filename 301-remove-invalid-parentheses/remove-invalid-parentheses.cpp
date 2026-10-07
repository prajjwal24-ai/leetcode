class Solution {
public:
    bool isvalid(string s){
        int bal=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                bal++;
            }
            else if(s[i] == ')') {
                bal--;
            
            if(bal<0) return false;
            }
        }
        return bal ==0;
    }
    void solve(int i,int n,string& s,string& curr,unordered_set<string>& ans,int& mx){
        if(i==n){

        if(isvalid(curr)){
            if(curr.size() > mx) {
            mx = curr.size();
            ans.clear();
            ans.insert(curr);
        }
        else if(mx == curr.size()){
            ans.insert(curr);

        }
        }
        return;
    
        }
        if(s[i] == '(' || s[i] == ')'){

        solve(i+1,n,s,curr,ans,mx);
        curr+=s[i];
        solve(i+1,n,s,curr,ans,mx);
        curr.pop_back();
        }
        else{
        curr+=s[i];
        solve(i+1,n,s, curr,ans,mx);
        curr.pop_back();
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
        int n = s.length();
        //vector<string>store;
        unordered_set<string>ans;
        int mx = 0;
        string curr ="";
        solve(0,n,s,curr,ans,mx);

        // if(store.size()){
            
        //     for(int i =store.size()-1;i>=0;i--){
        //         if(store[i].size() == mx) ans.insert(store[i]);
        //     }

        // }
        // else{
        //     return store;
        // }
        return vector<string>(ans.begin(),ans.end());
    }
};
