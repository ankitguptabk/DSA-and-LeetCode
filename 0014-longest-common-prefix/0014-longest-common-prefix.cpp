class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.size()==0) return "";
        string ans="";
        for(int i=0;i<s[0].size();i++){
            for(int j=1;j<s.size();j++){
                if(i>=s[j].size() || s[j][i]!=s[0][i] ) return ans;
            }
            ans+=s[0][i];
        }
        return ans;
    }
};