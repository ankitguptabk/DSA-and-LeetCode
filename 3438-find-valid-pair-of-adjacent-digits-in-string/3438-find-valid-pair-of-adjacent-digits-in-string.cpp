class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && m[s[i]]==(s[i]-'0')  && m[s[i+1]]==(s[i+1]-'0') && s[i]!=s[i+1]){
                string ans="";
                ans+=s[i];
                ans+=s[i+1];
                return ans;
            }
        }
        return "";
    }
};