class Solution {
public:
    bool palin(string x){
            for(int i=0;i<x.size()/2;i++){
                if(x[i]!=x[x.size()-1-i]) return false;
            }
            return true;
    }
    void sol(string s, int ind, vector<string>&curr, vector<vector<string>>&ans){
        if(ind==s.size()){
            ans.push_back(curr);
            return;
        }
        string y="";
        for(int i=ind;i<s.size();i++){
            y+=s[i];
            if(palin(y)){
                curr.push_back(y);
                sol(s,i+1,curr,ans);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>current;
        sol(s,0,current,ans);
        return ans;
    }
};