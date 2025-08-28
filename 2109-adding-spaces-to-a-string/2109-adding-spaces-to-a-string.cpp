class Solution {
public:
    string addSpaces(string s, vector<int>& spc) {
        string ans="";
        int a=0;
        for(int i=0;i<spc.size();i++){
            ans+=s.substr(a,spc[i]-a);
            ans+=" ";
            a=spc[i];
        }
        ans+=s.substr(a);
        return ans;
    }
};